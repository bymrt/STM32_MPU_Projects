/*
 * mpu6050.c
 *
 *  Created on: Apr 30, 2023
 *      Author: Ferhat
 */

#include "mpu6050.h"
#include "sensordriver.h"

extern I2C_HandleTypeDef hi2c1;

sensor_status_e sensor_test_device( uint8_t chipAdd );
uint8_t sensor_read_register8(uint8_t chipAdd, uint8_t regAdd);
uint16_t sensor_read_register16(uint8_t chipAdd, uint8_t regAdd);
sensor_status_e sensor_write_register16(uint8_t chipAdd, uint8_t regAdd, uint16_t value);
sensor_status_e sensor_write_register8(uint8_t chipAdd, uint8_t regAdd, uint8_t value);
sensor_status_e sensor_read_bytes(uint8_t chipAdd, uint8_t regAdd, uint8_t *pBuffer, uint8_t size);
sensor_status_e sensor_write_bytes(uint8_t chipAdd, uint8_t regAdd, uint8_t *pBuffer, uint8_t size);


int16_t MPU6050_Test()
{
	  HAL_StatusTypeDef status;

	  status = HAL_I2C_IsDeviceReady(&hi2c1, MPU6050_I2C_ADRESS_AD0, 4, 100);

	  if(HAL_OK == status){
		  return 1;

	  }else{
		  return 0;
	  }

}


int32_t MPU6050_Read_ID(void)
{
	uint8_t id;
	int8_t Buffer[1];
	HAL_StatusTypeDef status;
	id = sensor_read_register8(MPU6050_I2C_ADRESS_AD0,MPU_REG_WHO_AM_I);
	status = HAL_I2C_Mem_Read(&hi2c1,MPU6050_I2C_ADRESS_AD0, MPU_REG_WHO_AM_I, 1,Buffer , 1, 100);

	if(HAL_OK != status){
		//to do
	}
	if(0x68 == id){
		return 1;
	}
	else{
		return 0;
	}


}
