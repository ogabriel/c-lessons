#include <stdio.h>

int main() {
    int var = 20;
    // is a good pratice to assign NULL to a pointer in case you do not have an exact access to be assigned
    int *ip = NULL;
    // basically is the pointer of nothing
    printf("the address value of null pointer is: %x\n", ip);

    ip = &var;

    printf("Value of var: %d\n", var);
    printf("Address of var: %x\n", &var);
    // sees the value of ip
    printf("Value of ip: %d\n", *ip);
    printf("Address of ip: %x\n", &ip);

    return 0;
}