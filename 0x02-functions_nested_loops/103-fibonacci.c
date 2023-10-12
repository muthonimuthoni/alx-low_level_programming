#include "main.h"
#include <stdio.h>

int main() {
    long long int prev = 1, curr = 2, sum = 0;
    
    while (curr <= 4000000) {
        if (curr % 2 == 0) {
            sum += curr;
        }
        
        long long int next = prev + curr;
        prev = curr;
        curr = next;
    }

    printf("The sum of even-valued terms not exceeding 4,000,000: %lld\n", sum);
    
    return 0;
}

