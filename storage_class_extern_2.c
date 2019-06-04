#include <stdio.h>

extern int count;

void write_extern() {
    printf("external count is %d\n", count);
}
