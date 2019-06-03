#include <stdio.h>

int main() {
    // defines that a local variable should be stored in the register
    // instead fo the RAM
    // this means a lot of things
    // - the variable might be stored in the register (this depends on hardware & implementation restrictions)
    // and mostly, the compiler choice
    // - the variable has a maximum size (generally a word)
    // - can't be used with '&' (it does not have a memory location)
    // - this method shold be only used for variables that require quick access

    register int fast;

    fast = 123;

    printf("this is a register variable: %d\n", fast);

    return 0;
}