#include <unity.h>

void test_that_passes(void) {
    TEST_ASSERT_EQUAL(1,1);
}

void test_little_endianess(void) {
    uint32_t word = 0x01020304;
    uint8_t * b = (uint8_t*)&word;
    TEST_ASSERT_EQUAL_HEX8(0x04, b[0]);
    TEST_ASSERT_EQUAL_HEX8(0x03, b[1]);
    TEST_ASSERT_EQUAL_HEX8(0x02, b[2]);
    TEST_ASSERT_EQUAL_HEX8(0x01, b[3]);
}

int main(int argc, char **argv) {
    UNITY_BEGIN();
    RUN_TEST(test_that_passes);
    RUN_TEST(test_endianess);
    UNITY_END();

    return 0;
}