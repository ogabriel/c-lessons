#include <stdio.h>

unsigned int a = 60; // 0011 1100
unsigned int b = 13; // 0000 1101

int main() {
    register int c;

    // they are basicaly, binary logic
    // AND
    c = a & b;
    printf("a & b: %d\n", c);

    // OR
    c = a | b;
    printf("a | b: %d\n", c);

    // XOR
    c = a ^ b;
    printf("a ^ b: %d\n", c);

    // <<
    // moves the bits n positions to the left
    c = a << 4;
    printf("a << b: %d\n", c);

    // >>
    // moves the bits n positions to the right
    c = a >> 6;
    printf("a >> b: %d\n", c);

    // ~
    c = ~a;
    printf("~ a: %d\n", c);

    return 0;
}