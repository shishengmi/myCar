#ifndef __MOTOR_H
#define __MOTOR_H
#endif

#include "ti_msp_dl_config.h"

typedef struct Motor_Structures
{
    GPTIMER_Regs* Motor_TIM;
	DL_TIMER_CC_INDEX Motor_Index;
    GPIO_Regs* Motor_GPIO;
    uint32_t Motor_Pin_2;
    uint32_t Motor_Pin_1;
}Motor_Structure;

