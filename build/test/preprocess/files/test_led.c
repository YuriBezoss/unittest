#include "build/temp/_test_led.c"
#include "src/led.h"
#include "/var/lib/gems/2.4.0/gems/ceedling-0.30.0/vendor/cmock/src/cmock.h"
#include "/var/lib/gems/2.4.0/gems/ceedling-0.30.0/vendor/unity/src/unity.h"




void test_led_should_initializeLED(void){

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((led_init())), (

   ((void *)0)

   ), (UNITY_UINT)(7), UNITY_DISPLAY_STYLE_INT);

}
