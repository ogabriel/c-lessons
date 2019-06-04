#include <stdio.h>

int count;
extern void write_extern();

int main() {
// is used to give a reference of a global variable
    // that is visible to ALL files
    // when you are using extern, the var cant be initialized
    // however, it points out the var name to a storage location that it was previously defined

    count = 5;
    write_extern();

    return 0;
}
