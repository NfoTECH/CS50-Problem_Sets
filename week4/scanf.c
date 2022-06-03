#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *s = malloc(4);  // OR char s[4];
    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);

    // Scanf for numbers
    // int x;
    // printf("x: ");
    // scanf("%i", &x);
    // printf("x: %i\n", x);
}