#include "stm32f103c8.h"
#include "gpioDriver/gpio.h"
#include <stdint.h>

int main(void)
{
    
    RCC_PHERI_CLK_CTRL(GPIOA,ENABLE);
    
}
