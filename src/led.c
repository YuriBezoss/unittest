#include "led.h"

unsigned int led_port = -1;

unsigned int led_init(void){
    led_port = 0;
    return led_port;
}