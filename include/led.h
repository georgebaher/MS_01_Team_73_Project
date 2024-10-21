#ifndef LED_H
#define LED_H

#include "pico/stdlib.h"

#define RED_LED_PIN 13
#define GREEN_LED_PIN 27
#define BLUE_LED_PIN 4

void LED_Init(void);
void LED_On(uint gpio_pin);
void LED_Off(uint gpio_pin);
void Delay(uint ms);

#endif
