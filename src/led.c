#include "led.h"

void LED_Init(void)
{
    gpio_init(RED_LED_PIN);
    gpio_init(GREEN_LED_PIN);
    gpio_init(BLUE_LED_PIN);

    gpio_set_dir(RED_LED_PIN, GPIO_OUT);
    gpio_set_dir(GREEN_LED_PIN, GPIO_OUT);
    gpio_set_dir(BLUE_LED_PIN, GPIO_OUT);

    gpio_put(RED_LED_PIN, 0);
    gpio_put(GREEN_LED_PIN, 0);
    gpio_put(BLUE_LED_PIN, 1); // negative logic
}

void LED_On(uint gpio_pin)
{
    if (gpio_pin == BLUE_LED_PIN)
    {
        gpio_put(gpio_pin, 0);
    }
    else
    {
        gpio_put(gpio_pin, 1);
    }
}

// Turn off a specific LED
void LED_Off(uint gpio_pin)
{
    if (gpio_pin == BLUE_LED_PIN)
    {
        gpio_put(gpio_pin, 1);
    }
    else
    {
        gpio_put(gpio_pin, 0);
    }
}

void Delay(uint ms)
{
    sleep_ms(ms);
}
