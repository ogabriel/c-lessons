#include <stdio.h>

int main() {
    // returns the byte size of an variable
    int a;
    printf("the value(bytes) of a: %d\n", sizeof(a));

    // returns the address of a variable
    int b = 40;
    int c = &b;
    printf("the value of b is: %d\n", b);
    printf("the address of b is: %d\n", c);

    // pointer to a variable
    int* d;
    d = &b;
    printf("the pointer to b is: %d\n", d);
    printf("the value of c is: %d\n", *d);

    // conditional expression
    int e = (b == 40) ? 50 : 10;
    printf("the value of e is: %d\n", e);

    return 0;
}