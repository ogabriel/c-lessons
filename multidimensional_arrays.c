#include <stdio.h>

int main() {
    // declare a array
    // data_type name [const array size]
    int a[5][2] = { {0, 0}, {1, 2}, {2, 4}, {3, 6}, {4, 8}};
    int i, j;

    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("a[%d][%d] = %d\n", i, j, a[i][j]);
        }
    }
    // pass a array to a function
    // void func(int *param);
    // void func(int param[10]);
    // void func(int param[]);
    // in the case of passing withou the size, would be nice if there where another formal parameter
    // void func(int param[], int size);

    // how to return arrays from a function?
    // the c doesnt allow that, but there is a gambiarra
    // you declare a static variable, and than return it
    // ex
    int* func() {
        static int var[10];

        return var;
    }

    return 0;
}