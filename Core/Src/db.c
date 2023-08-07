/*
 * db.c
 *
 *  Created on: Dec 14, 2022
 *      Author: Anton & Denis
 */

#include <db.h>
#include "stdio.h"
#include "stm32f4xx_hal.h"


struct dbPinsConf PinsConf[NUMPIN];

struct dbPinToPin PinsLinks[NUMPINLINKS];

struct dbCron CronTask[NUMTASK];

struct dbSettings SetSettings;

struct dbCron dbCrontxt[MAXSIZE];

const struct dbPinsInfo PinsInfo[NUMPIN] = {
		// Total 64 pins
		{"PA0", "A", 0, GPIO_PIN_0, GPIOA},
		{"PA3", "A", 3, GPIO_PIN_3, GPIOA},
		{"PA4", "A", 4, GPIO_PIN_4, GPIOA},
		{"PA5", "A", 5, GPIO_PIN_5, GPIOA},
		{"PA6", "A", 6, GPIO_PIN_6, GPIOA}
//		{"PA8", "A", 8, GPIO_PIN_8, GPIOA},
//		{"PA9", "A", 9, GPIO_PIN_9, GPIOA},
//		{"PA10", "A", 10, GPIO_PIN_10, GPIOA},
//		{"PA15", "A", 15, GPIO_PIN_15, GPIOA},
//
//		{"PB1", "B", 1, GPIO_PIN_1, GPIOB},
//		{"PB2", "B", 2, GPIO_PIN_2, GPIOB},
//		{"PB3", "B", 3, GPIO_PIN_3, GPIOB},
//		{"PB4", "B", 4, GPIO_PIN_4, GPIOB},
//		{"PB5", "B", 5, GPIO_PIN_5, GPIOB},
//		{"PB6", "B", 6, GPIO_PIN_6, GPIOB},
//		{"PB7", "B", 7, GPIO_PIN_7, GPIOB},
//		{"PB8", "B", 8, GPIO_PIN_8, GPIOB},
//		{"PB9", "B", 9, GPIO_PIN_9, GPIOB},
//		{"PB14", "B", 14, GPIO_PIN_14, GPIOB},
//		{"PB15", "B", 15, GPIO_PIN_15, GPIOB},
//
//		{"PC0", "C", 0, GPIO_PIN_0, GPIOC},
//		{"PC2", "C", 2, GPIO_PIN_2, GPIOC},
//		{"PC3", "C", 3, GPIO_PIN_3, GPIOC},
//		{"PC6", "C", 6, GPIO_PIN_6, GPIOC},
//		{"PC7", "C", 7, GPIO_PIN_7, GPIOC},
//		{"PC8", "C", 8, GPIO_PIN_8, GPIOC},
//		{"PC9", "C", 9, GPIO_PIN_9, GPIOC},
//		{"PC10", "C", 10, GPIO_PIN_10, GPIOC},
//		{"PC11", "C", 11, GPIO_PIN_11, GPIOC},
//		{"PC12", "C", 12, GPIO_PIN_12, GPIOC},
//		{"PC13", "C", 13, GPIO_PIN_13, GPIOC},
//		{"PC14", "C", 14, GPIO_PIN_14, GPIOC},
//		{"PC15", "C", 15, GPIO_PIN_15, GPIOC},
//
//		{"PD0", "D", 0, GPIO_PIN_0, GPIOD},
//		{"PD1", "D", 1, GPIO_PIN_1, GPIOD},
//		{"PD2", "D", 2, GPIO_PIN_2, GPIOD},
//		{"PD3", "D", 3, GPIO_PIN_3, GPIOD},
//		{"PD4", "D", 4, GPIO_PIN_4, GPIOD},
//		{"PD5", "D", 5, GPIO_PIN_5, GPIOD},
//		{"PD6", "D", 6, GPIO_PIN_6, GPIOD},
//		{"PD7", "D", 7, GPIO_PIN_7, GPIOD},
//		{"PD8", "D", 8, GPIO_PIN_8, GPIOD},
//		{"PD10", "D", 10, GPIO_PIN_10, GPIOD},
//		{"PD11", "D", 11, GPIO_PIN_11, GPIOD},
//		{"PD12", "D", 12, GPIO_PIN_12, GPIOD},
//		{"PD13", "D", 13, GPIO_PIN_13, GPIOD},
//		{"PD14", "D", 14, GPIO_PIN_14, GPIOD},
//		{"PD15", "D", 15, GPIO_PIN_15, GPIOD},
//
//		{"PE0", "E", 0, GPIO_PIN_0, GPIOE},
//		{"PE1", "E", 1, GPIO_PIN_1, GPIOE},
//		{"PE2", "E", 2, GPIO_PIN_2, GPIOE},
//		{"PE3", "E", 3, GPIO_PIN_3, GPIOE},
//		{"PE4", "E", 4, GPIO_PIN_4, GPIOE},
//		{"PE5", "E", 5, GPIO_PIN_5, GPIOE},
//		{"PE6", "E", 6, GPIO_PIN_6, GPIOE},
//		{"PE7", "E", 7, GPIO_PIN_7, GPIOE},
//		{"PE8", "E", 8, GPIO_PIN_8, GPIOE},
//		{"PE9", "E", 9, GPIO_PIN_9, GPIOE},
//		{"PE10", "E", 10, GPIO_PIN_10, GPIOE},
//		{"PE11", "E", 11, GPIO_PIN_11, GPIOE},
//		{"PE12", "E", 12, GPIO_PIN_12, GPIOE},
//		{"PE13", "E", 13, GPIO_PIN_13, GPIOE},
//		{"PE14", "E", 14, GPIO_PIN_14, GPIOE},
//		{"PE15", "E", 15, GPIO_PIN_15, GPIOE}
};
