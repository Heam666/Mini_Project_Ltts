#include "unity.h"
#include "crypto.h"
void setUp()
{

}
void tearDown()
{

}

void test_small(void)
{
    TEST_ASSERT_EQUAL_STRING("khpd",cc_encrypt("heam",3));
    TEST_ASSERT_EQUAL_STRING("heam",cc_decrypt("khpd",3));
    

}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_small);
    return UNITY_END();
}