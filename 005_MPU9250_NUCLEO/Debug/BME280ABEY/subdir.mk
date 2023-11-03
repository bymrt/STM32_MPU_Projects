################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../BME280ABEY/BME280_STM32.c 

OBJS += \
./BME280ABEY/BME280_STM32.o 

C_DEPS += \
./BME280ABEY/BME280_STM32.d 


# Each subdirectory must supply rules for building sources it contributes
BME280ABEY/%.o BME280ABEY/%.su: ../BME280ABEY/%.c BME280ABEY/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F446xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/yasin/Desktop/005_MPU9250_NUCLEO/BME280ABEY" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-BME280ABEY

clean-BME280ABEY:
	-$(RM) ./BME280ABEY/BME280_STM32.d ./BME280ABEY/BME280_STM32.o ./BME280ABEY/BME280_STM32.su

.PHONY: clean-BME280ABEY

