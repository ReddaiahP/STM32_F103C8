#include "gpio.h"

void RCC_CLK_EN(int shift){
    
    RCC->APB2ENR |= (1<<shift);
}

void RCC_CLK_DI(int shift){
    
    RCC->APB2ENR &= ~(1<<shift);
}

void RCC_PHERI_CLK_CTRL(GPIO_REG_DEF_t * PORTx, int value){
    if(value == ENABLE){
        if(PORTx == GPIOA){
            RCC_CLK_EN(2);
        }else if(PORTx == GPIOB){
            RCC_CLK_EN(3);

        }else if(PORTx == GPIOC){
            RCC_CLK_EN(4);

        }else if(PORTx == GPIOD){
            RCC_CLK_EN(5);

        }else if(PORTx == GPIOE){
            RCC_CLK_EN(6);

        }else if(PORTx == GPIOF){
            RCC_CLK_EN(7);

        }else if(PORTx == GPIOG){
            RCC_CLK_EN(8);

        }
    }else if(value == DISABLE){
        if(PORTx == GPIOA){
            RCC_CLK_DI(2);
        }else if(PORTx == GPIOB){
            RCC_CLK_DI(3);

        }else if(PORTx == GPIOC){
            RCC_CLK_DI(4);

        }else if(PORTx == GPIOD){
            RCC_CLK_DI(5);

        }else if(PORTx == GPIOE){
            RCC_CLK_DI(6);

        }else if(PORTx == GPIOF){
            RCC_CLK_DI(7);

        }else if(PORTx == GPIOG){
            RCC_CLK_DI(8);

        }
    }
    
}


