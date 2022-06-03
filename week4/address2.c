#include <stdio.h>

int main(void)
{
    // string s = "HI!";
    char *s = "HI!";
    char *p = &s[0];

    // These 2 will print out same result as string s have same address as its first char &s[0]
    printf("%p\n", p);
    printf("%p\n", s);
}