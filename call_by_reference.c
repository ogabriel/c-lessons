#include <stdio.h>

void swap(int*, int*);

int main() {
    int a = 10;
    int b = 5;

    printf("the value of a: %d and b: %d\n", a, b);

    // send the address
    swap(&a, &b);

    printf("the value of a: %d and b: %d, after swap\n", a, b);

    return 0;
}

// receive the address
void swap(int *a, int *b) {
    int temp;
    // get the real value of a
    temp = *a;
    // changes the actual values
    *a = *b;
    // changes the value of temp and actual value of b
    *b = temp;
}