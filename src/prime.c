#include "prime.h"
#include <stdbool.h>

bool is_prime(int num){
    int a=0; // sinnlos, aber korrekt
    if(num>1){
        for(int i=2; i<=num/2; i++){
            if(0==(num%i)){
                return false;
            }
        }
        return true;
    }else{
        return false;
    }
}