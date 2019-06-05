#include <stdio.h>

int main() {
    int i;
    int count = 10;

    for (i = 0; i < count; i++) {
        LOOP: printf("the count %d\n", count);
        // skips for the next
        if(i == 5) continue;
        // terminates the loop
        if(i == 8) break;
        // go to LOOP label above
        if(i++==3) goto LOOP;

        printf("the number %d\n", i);
    }

    // infinite loops
    for(;;)
        printf("∞\n");
    while(1)
        printf("∞\n");

    return 0;
}