#include <stdio.h>

// declared at the top
extern int foo;
extern char bar;

int main() {
    // the declaration assures to the compiler that exists a variable with
    // the given type and name, so the compiler can proceed for futher compilation
    // without futher compilation requirin a complete detail about the variable
    // this is aplicable for multiple files programs, that compiles the things without knowing
    // the actual function or variable existence

    // defined and initialized
    int foo = 5;
    int bar = 'a';

    // used normally
    printf("show int foo: %d\n", foo);
    printf("show char bar: %c\n", bar);

    return 0;
}