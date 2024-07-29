#include "motor.h"

Motor_Structure motor_Init(
GPTIMER_Regs* Motor_TIM,
DL_TIMER_CC_INDEX Motor_Index,
GPIO_Regs* Motor_GPIO,
uint32_t Motor_Pin_2,
uint32_t Motor_Pin_1)
{
    Motor_Structure motor;
    motor.Motor_TIM = Motor_TIM;
    motor.Motor_Index = Motor_Index;
    motor.Motor_GPIO = Motor_GPIO;
    motor.Motor_Pin_2 = Motor_Pin_2;
    motor.Motor_Pin_1 = Motor_Pin_1;
    return motor;

}

