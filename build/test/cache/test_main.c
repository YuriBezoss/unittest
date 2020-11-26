#include "build/temp/_test_main.c"
#include "src/main.h"
#include "build/test/mocks/mock_led.h"
#include "/var/lib/gems/2.4.0/gems/ceedling-0.30.0/vendor/cmock/src/cmock.h"
#include "/var/lib/gems/2.4.0/gems/ceedling-0.30.0/vendor/unity/src/unity.h"


void test_main_should_initializeLED(void){

    led_init_CMockExpectAndReturn(7, 0);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((TestableMain())), (

   ((void *)0)

   ), (UNITY_UINT)(8), UNITY_DISPLAY_STYLE_INT);

}
