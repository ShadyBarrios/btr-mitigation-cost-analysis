#include <stdio.h>

int main(){
    unsigned sum = 0;

    for(int i = 1; i < 10000; i++){
        sum += i;
    }

    printf("gem5 testing... sum of 1 to 10000: %i\n", sum);
    
    return 0;
}