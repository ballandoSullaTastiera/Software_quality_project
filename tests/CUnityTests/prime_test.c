#include "../../src/prime.h"
#include "vendor/unity.h"
#include <stdlib.h>

void test_positive_non_prime(void){
    //given a function
    //when
    int number=10;
     
    //then
    TEST_ASSERT_FALSE(is_prime(number));
}

int main(void) {
    UnityBegin("Primes");

    RUN_TEST(test_positive_non_prime);

    UnityEnd();
    return 0;
}