#include "main.h"
#include "led.h"

#ifndef TEST
int main(){
#else
int TestableMain(void){
#endif
    led_init();
    return 0;
}
