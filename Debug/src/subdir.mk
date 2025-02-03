################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/APP.c \
../src/DIO_program.c \
../src/LED_programe.c \
../src/SSD_program.c 

OBJS += \
./src/APP.o \
./src/DIO_program.o \
./src/LED_programe.o \
./src/SSD_program.o 

C_DEPS += \
./src/APP.d \
./src/DIO_program.d \
./src/LED_programe.d \
./src/SSD_program.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


