#include <stdio.h>
#include <stdbool.h>
#include "prime.h"

int main(void){
    int cnt=0;
    for(int i=0; i<100; i++){
        if(is_prime(i)==true) cnt++;
    }
    printf("Anzahl der Primzahlen kleiner 100: %d",cnt);
}