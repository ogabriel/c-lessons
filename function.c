#include <stdio.h>

// declaration, can have just the type of the param
void show(char);
char input();

int main() {
    show("write something");
    char* a = input();
    show(a);

    return 0;
}

// definition
void show(char *a) {
    printf(a);
}

char* input() {
    char *a = gets();
    return a;
}