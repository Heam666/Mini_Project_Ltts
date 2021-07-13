#include "unity.h"
#include "crypto.h"
void setUp()
{

}
void tearDown()
{

}

void test_prime(void)
{
    TEST_ASSERT_EQUAL(1,prime(13));
    TEST_ASSERT_EQUAL(0,prime(12));
    

}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_prime);
    return UNITY_END();
}