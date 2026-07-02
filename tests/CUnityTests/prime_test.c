#include "../../src/prime.h"
#include "vendor/unity.h"
#include <stdlib.h>

void setUp(void){

}

void tearDown(void){

}

void test_positive_non_prime(void){
    //given a function
    //when
    int number=10;
     
    //then expect that return value is false
    TEST_ASSERT_FALSE(is_prime(number));
}

void test_negative_number_which_positive_pendant_is_prime(void){
    //given a function
    //when
    int number=-5;
     
    //then expect that return value is false
    TEST_ASSERT_FALSE(is_prime(number));
}

void test_zero(void){
    //given a function
    //when
    int number=0;
     
    //then expect that return value is false
    TEST_ASSERT_FALSE(is_prime(number));
}

void test_one(void){
    //given a function
    //when
    int number=1;
     
    //then expect that return value is false
    TEST_ASSERT_FALSE(is_prime(number));
}

void test_prime(void){
    //given a function
    //when
    int number=7;
     
    //then expect that return value is true
    TEST_ASSERT_TRUE(is_prime(number));
}

int main(void) {
    UnityBegin("Primes");

    RUN_TEST(test_positive_non_prime);

    RUN_TEST(test_negative_number_which_positive_pendant_is_prime);
    
    RUN_TEST(test_zero);

    RUN_TEST(test_one);

    RUN_TEST(test_prime);

    return UnityEnd();
}