#include <stdio.h>

int main() {
    // the arithmetic operator that a pointer accept: ++, --, - and +
    // if you do a ++ in a integer pointer, you will point to 4 bytes foward
    // pointer variables can be incremented
    int var[] = {1, 2, 3, 4, 5};
    int i, *ptr;

    // this points to the first addres
    ptr = var;

    for (int i = 0; i < 5; i++)
    {
        printf("array var[%d] = %d\n", i, var[i]);
        printf("pointer var[%d] = %d\n", i, *ptr);

        ptr ++;
    }
    // or decrement
    printf("decrement\n");
    int *ptr2;
    ptr2 = &var[4];

    for (int i = 4; i > -1 ; i--)
    {
        printf("array var[%d] = %d\n", i, var[i]);
        printf("pointer var[%d] = %d\n", i, *ptr2);

        ptr2--;
    }

    return 0;
}