#include "unity.h"
#include "airlines.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_airlines(void)
{
  TEST_ASSERT(c);
  TEST_ASSERT(p);
}


int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_airlines);


  /* Close the Unity Test Framework */
  return UNITY_END();
}

