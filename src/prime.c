#include "prime.h"
#include <stdbool.h>

// is_prime mit Fehler (num==1, sowie num<=0)
bool is_prime(int num){
    for(int i=1; i<=num/2; i++){
        if(0==(num%i)){
            return false;
        }
    }
    return true;
}