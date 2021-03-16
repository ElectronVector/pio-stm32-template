#include <unity.h>

void test_that_passes(void) {
    TEST_ASSERT_EQUAL(1,1);
}

int main(int argc, char **argv) {
    UNITY_BEGIN();
    RUN_TEST(test_that_passes);
    UNITY_END();

    return 0;
}