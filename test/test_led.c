#include "unity.h"
#include "cmock.h"
#include "led.h"


void test_led_should_initializeLED(void){
    TEST_ASSERT_EQUAL(0, led_init());
}