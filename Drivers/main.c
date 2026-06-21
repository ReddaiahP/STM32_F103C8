#include <stdint.h>

#define RCC_APB2ENR   (*(volatile uint32_t*)0x40021018)
#define GPIOC_CRH     (*(volatile uint32_t*)0x40011004)
#define GPIOC_ODR     (*(volatile uint32_t*)0x4001100C)

void delay(void)
{
    for(volatile uint32_t i = 0; i < 500000; i++);
}

int main(void)
{
    /* Enable GPIOC clock */
    RCC_APB2ENR |= (1 << 4);

    /* PC13 output push-pull, 2 MHz */
    GPIOC_CRH &= ~(0xF << 20);
    GPIOC_CRH |=  (0x2 << 20);

    while(1)
    {
        GPIOC_ODR &= ~(1 << 13);   // LED ON (Bluepill LED is active LOW)
        delay();

        GPIOC_ODR |= (1 << 13);    // LED OFF
        delay();
    }
}
