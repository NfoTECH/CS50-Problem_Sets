#include <stdio.h>

int main(void)
{
    // * before a variable name *p is a pointer to an address or location in memory
    // & is the address of the operator
    int n = 50;
    int *p = &n;

    // Printing an ADDRESS stored in a variable
    printf("%p\n", p);

    // Printing an ADDRESS without a variable
    // int n = 50;
    // printf("%p\n", &n);

    
    // Printing the VALUE in that particular address
    printf("%i\n", *p);
}