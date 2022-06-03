#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");

    // Iterate over the string(char array), where strlen == string length
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            // Uppercase before lowercase in ASCII table and difference is 32
            // Print lowercase[char] - 32; a - 32 == A; z - 32 == Z etc
            printf("%c", s[i] - 32);
        }
        else
        {
            // Print input char as is
            printf("%c", s[i]);
        }
    }
    // Just move cursor to new line
    printf("\n");
}