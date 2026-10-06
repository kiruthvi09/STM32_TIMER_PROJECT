################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../CUSTOM\ DRIVERS/Timer.c \
../CUSTOM\ DRIVERS/uart.c 

OBJS += \
./CUSTOM\ DRIVERS/Timer.o \
./CUSTOM\ DRIVERS/uart.o 

C_DEPS += \
./CUSTOM\ DRIVERS/Timer.d \
./CUSTOM\ DRIVERS/uart.d 


# Each subdirectory must supply rules for building sources it contributes
CUSTOM\ DRIVERS/Timer.o: ../CUSTOM\ DRIVERS/Timer.c CUSTOM\ DRIVERS/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I"../CUSTOM DRIVERS" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"CUSTOM DRIVERS/Timer.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
CUSTOM\ DRIVERS/uart.o: ../CUSTOM\ DRIVERS/uart.c CUSTOM\ DRIVERS/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I"../CUSTOM DRIVERS" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"CUSTOM DRIVERS/uart.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-CUSTOM-20-DRIVERS

clean-CUSTOM-20-DRIVERS:
	-$(RM) ./CUSTOM\ DRIVERS/Timer.cyclo ./CUSTOM\ DRIVERS/Timer.d ./CUSTOM\ DRIVERS/Timer.o ./CUSTOM\ DRIVERS/Timer.su ./CUSTOM\ DRIVERS/uart.cyclo ./CUSTOM\ DRIVERS/uart.d ./CUSTOM\ DRIVERS/uart.o ./CUSTOM\ DRIVERS/uart.su

.PHONY: clean-CUSTOM-20-DRIVERS

