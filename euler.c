#include <stdio.h>

int multiples3_5(int n) { // Problem 1
    int sum = 0, i;
    for (i = 0; i < n; i++) {
        if (i % 5 == 0 || i % 3 == 0) {
        sum += i;
        }
    }
    return sum;
} 

int smallest_multiple() { // Problem 5
    int x = 2520, i;
    for(i = 11; i < 20; i++) {
        int k = 1;
        while (x*k%i != 0) { k++; }
        x *= k;
    } return x; 
}