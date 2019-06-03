#include <stdio.h>

int main() {
    //auto storage class
    //is the default sotrage class for all local variables

    //both the same
    auto int foo;
    int bar;

    foo = 20;
    bar = 40;

    printf("this is foo: %d and this is bar: %d \n", foo, bar);

    return 0;
}