#include "unity.h"
#include "cmock.h"
#include "mock_led.h"
#include "main.h"

void test_main_should_initializeLED(void){
    led_init_Expect();
    TEST_ASSERT_EQUAL(0, TestableMain());
}



