# 0 "gpioDriver/gpio.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "gpioDriver/gpio.c"
# 1 "gpioDriver/gpio.h" 1



# 1 "gpioDriver/../stm32f103c8.h" 1




# 1 "/usr/lib/gcc/arm-none-eabi/14.2.1/include/stdint.h" 1 3 4
# 34 "/usr/lib/gcc/arm-none-eabi/14.2.1/include/stdint.h" 3 4

# 34 "/usr/lib/gcc/arm-none-eabi/14.2.1/include/stdint.h" 3 4
typedef signed char int8_t;


typedef short int int16_t;


typedef long int int32_t;


typedef long long int int64_t;


typedef unsigned char uint8_t;


typedef short unsigned int uint16_t;


typedef long unsigned int uint32_t;


typedef long long unsigned int uint64_t;




typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef long int int_least32_t;
typedef long long int int_least64_t;
typedef unsigned char uint_least8_t;
typedef short unsigned int uint_least16_t;
typedef long unsigned int uint_least32_t;
typedef long long unsigned int uint_least64_t;



typedef int int_fast8_t;
typedef int int_fast16_t;
typedef int int_fast32_t;
typedef long long int int_fast64_t;
typedef unsigned int uint_fast8_t;
typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
typedef long long unsigned int uint_fast64_t;




typedef int intptr_t;


typedef unsigned int uintptr_t;




typedef long long int intmax_t;
typedef long long unsigned int uintmax_t;
# 6 "gpioDriver/../stm32f103c8.h" 2
# 5 "gpioDriver/gpio.h" 2


# 6 "gpioDriver/gpio.h"
typedef struct{
 volatile uint32_t CRL;
 volatile uint32_t CRH;
 volatile uint32_t IDR;
 volatile uint32_t ODR;
 volatile uint32_t BSRR;
 volatile uint32_t BRR;
 volatile uint32_t LCKR;
}GPIO_REG_DEF_t;
# 2 "gpioDriver/gpio.c" 2



void main(){
    ((GPIO_REG_DEF_t *)0x40010800)->ODR;
}
