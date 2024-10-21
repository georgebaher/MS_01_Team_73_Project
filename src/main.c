#include "pico/stdlib.h"
#include "led.h"

int main(void)
{
    LED_Init();

    while (1)
    {
        LED_Off(RED_LED_PIN);
        LED_Off(GREEN_LED_PIN);
        LED_Off(BLUE_LED_PIN);
        Delay(5000);

        LED_On(RED_LED_PIN);
        Delay(1000);
        LED_Off(RED_LED_PIN);

        LED_On(GREEN_LED_PIN);
        Delay(1000);
        LED_Off(GREEN_LED_PIN);

        LED_On(BLUE_LED_PIN);
        Delay(1000);
        LED_Off(BLUE_LED_PIN);

        LED_On(RED_LED_PIN);
        LED_On(GREEN_LED_PIN);
        LED_On(BLUE_LED_PIN);
        Delay(2000);

        LED_Off(RED_LED_PIN);
        LED_Off(GREEN_LED_PIN);
        LED_Off(BLUE_LED_PIN);
    }

    return 0;
}
