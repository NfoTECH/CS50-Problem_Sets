#include <stdio.h>

int main(void)
{
    char *s = "HI!";
    printf("%p\n", s);          // Output = 0x402004
    printf("%p\n", &s[0]);      // Output = 0x402004
    printf("%p\n", &s[1]);      // Output = 0x402005
    printf("%p\n", &s[2]);      // Output = 0x402006
    printf("%p\n", &s[3]);      // Output = 0x402007
}