#include "main.h"

void SysTick_Handler()
{
    HAL_IncTick();
}

int main (void)
{
    HAL_Init();
    SystemCoreClockUpdate();
    __HAL_RCC_GPIOA_CLK_ENABLE();
    HAL_GPIO_Init(GPIOA, &(GPIO_InitTypeDef){.Mode = GPIO_MODE_OUTPUT_OD, .Pin = GPIO_PIN_11});
    while(1) {
        HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_11);
        HAL_Delay(100);
    }
}
