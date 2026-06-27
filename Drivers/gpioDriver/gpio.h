#ifndef GPIO_F103_H
#define GPIO_F103_H

#include "../stm32f103c8.h"

typedef struct{
	volatile uint32_t CRL;
	volatile uint32_t CRH;
	volatile uint32_t IDR;
	volatile uint32_t ODR;
	volatile uint32_t BSRR;
	volatile uint32_t BRR;
	volatile uint32_t LCKR;
}GPIO_REG_DEF_t;

#define GPIOA ((GPIO_REG_DEF_t *)GPIOABASE)
#define GPIOB ((GPIO_REG_DEF_t *)GPIOBBASE)
#define GPIOC ((GPIO_REG_DEF_t *)GPIOCBASE)
#define GPIOD ((GPIO_REG_DEF_t *)GPIODBASE)
#define GPIOE ((GPIO_REG_DEF_t *)GPIOEBASE)
#define GPIOF ((GPIO_REG_DEF_t *)GPIOFBASE)
#define GPIOG ((GPIO_REG_DEF_t *)GPIOGBASE)

#endif