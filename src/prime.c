#include "prime.h"
#include <stdbool.h>

bool is_prime(int num){
    if(num<=1){
        return false;
    }else{
        for(int i=2; i<=num/2; i++){
            if(0==(num%i)){
                return false;
            }
        }
        return true;
    }
}