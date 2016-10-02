/**
*****************************************************************************
**
**  File        : main.c
**
**  Abstract    : main function.
**
**  Functions   : main
**
**  Environment : Atollic TrueSTUDIO(R)
**                STMicroelectronics STM32F4xx Standard Peripherals Library
**
**  Distribution: The file is distributed "as is", without any warranty
**                of any kind.
**
**  (c)Copyright Atollic AB.
**  You may use this file as-is or modify it according to the needs of your
**  project. This file may only be built (assembled or compiled and linked)
**  using the Atollic TrueSTUDIO(R) product. The use of this file together
**  with other tools than Atollic TrueSTUDIO(R) is not permitted.
**
*****************************************************************************
*/

/* Includes */
//#include "stm32f4xx.h"

/* Private macro */
/* Private variables */
//const uint16_t LEDS = GPIO_Pin_1;
//const uint16_t LED[1] = {GPIO_Pin_1};
//const long LED_COUNT = 1;
///* Private function prototypes */
///* Private functions */
//void delay(uint32_t ms);

/**
**===========================================================================
**
**  Abstract: main program
**
**===========================================================================
*/
//int main(void)
//{
//  int i = 0;
//
//  /**
//  *  IMPORTANT NOTE!
//  *  The symbol VECT_TAB_SRAM needs to be defined when building the project
//  *  if code has been located to RAM and interrupts are used.
//  *  Otherwise the interrupt table located in flash will be used.
//  *  See also the <system_*.c> file and how the SystemInit() function updates
//  *  SCB->VTOR register.
//  *  E.g.  SCB->VTOR = 0x20000000;
//  */
//
//  /* TODO - Add your application code here */
//  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC, ENABLE);
//  GPIO_InitTypeDef gpio;
//  GPIO_StructInit(&gpio);
//
//  gpio.GPIO_Mode = GPIO_Mode_OUT;
//  gpio.GPIO_Pin = LEDS;
//
//  GPIO_Init(GPIOC, &gpio);
//  GPIO_SetBits(GPIOC, LEDS);
//
//
//  uint32_t counter = 0;
//  /* Infinite loop */
//  while (1)
//  {
//	i++;
//	counter++;
//
//	GPIO_ResetBits(GPIOC, LEDS);
//	GPIO_SetBits(GPIOC, LED[counter % 2]);
//
//	delay(250);
//  }
//}
//
//
//
//void delay(uint32_t ms) {
//    ms *= 3360;
//    while(ms--) {
//        __NOP();
//    }
//}
//
//






//#include <stm32f4xx_gpio.h>
//#include <stm32f4xx_rcc.h>
//
//void setup() {
//    RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC, ENABLE);
//
//    GPIO_InitTypeDef gpioInit;
//    GPIO_StructInit(&gpioInit);
//    gpioInit.GPIO_Mode = GPIO_Mode_OUT;
//    gpioInit.GPIO_Pin = GPIO_Pin_1;
//    GPIO_Init(GPIOC, &gpioInit);
//}
//
//void delay(uint32_t ms) {
//    ms *= 3360;
//    while (ms--) {
//        __NOP();
//    }
//}
//
//void loop() {
//    GPIO_ToggleBits(GPIOC, GPIO_Pin_1);
//    delay(2500);
//}
//
//int main() {
//    setup();
//    while (1)
//        loop();
//    return 0;
//}













#include <stm32f4xx_gpio.h>
#include <stm32f4xx_rcc.h>

void delay(uint32_t ms) {
    ms *= 3360;
    while (ms--) {
        __NOP();
    }
}

int main() {
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC, ENABLE);
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_USART2, ENABLE);


	    GPIO_InitTypeDef gpioInit;
	    GPIO_StructInit(&gpioInit);
	    gpioInit.GPIO_Mode = GPIO_Mode_OUT;
	    gpioInit.GPIO_Pin = GPIO_Pin_1;
	    GPIO_Init(GPIOC, &gpioInit);
    while (1) {
    	GPIO_ToggleBits(GPIOC, GPIO_Pin_1);
    	delay(100);
    }
    return 0;
}






























