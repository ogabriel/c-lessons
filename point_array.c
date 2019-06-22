#include <stdio.h>

const int MAX = 4;

int main() {
    char *names[] = {
        "Pain",
        "Nagato",
        "Shinra",
        "Tensei"
    };

    for (size_t i = 0; i < MAX; i++)
    {
        printf("The word %d is: %s\n", i + 1, names[i]);
    }

    return 0;
}