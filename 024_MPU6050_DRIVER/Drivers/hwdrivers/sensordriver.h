/*
 * sensordriver.h
 *
 *  Created on: 3 May 2023
 *      Author: Ferhat
 */

#ifndef HWDRIVERS_SENSORDRIVER_H_
#define HWDRIVERS_SENSORDRIVER_H_

#include <stdint.h>
#include "stm32f4xx_hal.h"

typedef enum {
	SENSOR_OK,
	SENSOR_ERROR
}sensor_status_e;


sensor_status_e sensor_test_device( uint8_t chipAdd );
uint8_t sensor_read_register8(uint8_t chipAdd, uint8_t regAdd);
uint16_t sensor_read_register16(uint8_t chipAdd, uint8_t regAdd);
sensor_status_e sensor_write_register16(uint8_t chipAdd, uint8_t regAdd, uint16_t value);
sensor_status_e sensor_write_register8(uint8_t chipAdd, uint8_t regAdd, uint8_t value);
sensor_status_e sensor_read_bytes(uint8_t chipAdd, uint8_t regAdd, uint8_t *pBuffer, uint8_t size);
sensor_status_e sensor_write_bytes(uint8_t chipAdd, uint8_t regAdd, uint8_t *pBuffer, uint8_t size);


#endif /* HWDRIVERS_SENSORDRIVER_H_ */
