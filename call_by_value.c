#include <stdio.h>

void swap(int, int);

int main() {
    int a = 10;
    int b = 5;

    printf("the value of a: %d and b: %d\n", a, b);

    swap(a, b);

    printf("the value of a: %d and b: %d, after swap\n", a, b);

    return 0;
}

void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}