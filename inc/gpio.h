/*
 * gpio.h
 *
 *  Created on: 06 Oct 2018
 *      Author: jamescushway
 */

#ifndef GPIO_H_
#define GPIO_H_

#define PERIPH_BASE 			0x40000000
#define AHB1_PERIPH_BASE 		PERIPH_BASE + 0x00020000
#define RCC_BASE 				AHB1_PERIPH_BASE + 0x3800
#define AHB1ENR 				RCC_BASE + 0x30
#define RCC_AHB1Periph_GPIOD 	0x00000008


/* GPIO port base addresses */
#define GPIOA_BASE 				AHB1_PERIPH_BASE
#define GPIOB_BASE 				AHB1_PERIPH_BASE + 0x0400
#define GPIOC_BASE 				AHB1_PERIPH_BASE + 0x0800
#define GPIOD_BASE 				AHB1_PERIPH_BASE + 0x0C00
#define GPIOE_BASE 				AHB1_PERIPH_BASE + 0x1000
#define GPIOF_BASE 				AHB1_PERIPH_BASE + 0x1400
#define GPIOG_BASE 				AHB1_PERIPH_BASE + 0x1800
#define GPIOH_BASE 				AHB1_PERIPH_BASE + 0x1C00
#define GPIOI_BASE 				AHB1_PERIPH_BASE + 0x2000

/* GPIO typedef struct */
typedef struct {
	  uint32_t MODER;    /*!< GPIO port mode register,               Address offset: 0x00      */
	  uint32_t OTYPER;   /*!< GPIO port output type register,        Address offset: 0x04      */
	  uint32_t OSPEEDR;  /*!< GPIO port output speed register,       Address offset: 0x08      */
	  uint32_t PUPDR;    /*!< GPIO port pull-up/pull-down register,  Address offset: 0x0C      */
	  uint32_t IDR;      /*!< GPIO port input data register,         Address offset: 0x10      */
	  uint32_t ODR;      /*!< GPIO port output data register,        Address offset: 0x14      */
	  uint32_t BSRR;     /*!< GPIO port bit set/reset register,      Address offset: 0x18      */
	  uint32_t LCKR;     /*!< GPIO port configuration lock register, Address offset: 0x1C      */
	  uint32_t AFR[2];   /*!< GPIO alternate function registers,     Address offset: 0x20-0x24 */
} GPIO_TypeDef;

/* GPIO init struct */
typedef struct {
	  uint32_t MODER;
	  uint32_t OTYPER;
	  uint32_t OSPEEDR;
	  uint32_t PUPDR;
} GPIO_InitTypeDef;

/* GPIO Port Structs */
GPIO_TypeDef *GPIOA = GPIOA_BASE;
GPIO_TypeDef *GPIOB = GPIOB_BASE;
GPIO_TypeDef *GPIOC = GPIOC_BASE;
GPIO_TypeDef *GPIOD = GPIOD_BASE;
GPIO_TypeDef *GPIOE = GPIOE_BASE;
GPIO_TypeDef *GPIOF = GPIOF_BASE;
GPIO_TypeDef *GPIOG = GPIOG_BASE;
GPIO_TypeDef *GPIOH = GPIOH_BASE;
GPIO_TypeDef *GPIOI = GPIOI_BASE;

void GPIO_Init(GPIO_TypeDef* GPIOx, GPIO_InitTypeDef* GPIO_InitStruct);

#endif /* GPIO_H_ */
