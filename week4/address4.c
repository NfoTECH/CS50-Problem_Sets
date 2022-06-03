#include <stdio.h>

int main(void)
{
    char *s = "HI!";
    printf("%c\n", *s);             // Output = H
    printf("%c\n", *(s + 1));       // Output = I
    printf("%c\n", *(s + 2));       // Output = !
}