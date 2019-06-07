#include <stdio.h>

void func(void);
static int count = 5;

int main() {
    // static storage class
    // tells the compiler to keep the local variable in existence during the life-time of the program
    // instead of creating and destroying it each time it comes into and goes out of scope
    // therefore, make static variables, allows to maintain their values between functions calls
    // static modifier may be applied to global variables, when this is done
    // it causes the variable scope to be restricted to the file which is declareted
    // it calses only one copy of that data member to be shared by all the objects of that class

    while(count--)
        func();

    return 0;
}

void func(void) {
    static int i = 5;
    i++;
    printf("i is %d and count is %d\n", i, count);
}