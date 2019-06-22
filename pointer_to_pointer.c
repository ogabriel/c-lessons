#include <stdio.h>

int main() {
    int var = 10;
    int *ptr1;
    int **ptr2;

    ptr1 = &var;
    ptr2 = &ptr1;

    printf("the var addres is: %x\n", &var);
    printf("the ptr1 addres is: %x\n", &ptr1);
    printf("the ptr2 addres is: %x\n", &ptr2);

    printf("the var value is: %d\n", var);
    printf("the ptr1 value is: %d\n", *ptr1);
    printf("the ptr2 value is: %x\n", *ptr2);
    printf("the ptr2 value is: %d\n", **ptr2);

    return 0;
}