#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // argc (argument count) must be 2
    if (argc != 2) {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Iterate over the argv[1] passed as key
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        // argv[1] as key must be digits
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // Using atoi(ASCII to Integer), convert argv[1] to int
    int k = atoi(argv[1]);

    // Get plaintext input from user
    string p = get_string("plaintext: ");

    // Print the rotated ciphertext
    printf("ciphertext: ");

    // Engaging the Ceasar formula c[i] = (p[i] + k) % 26
    // Iterate over the characters of the plaintext passed
    for (int i = 0; i < strlen(p); i++)
    {
        // UPPERCASE formula with ASCII corresponding value 65
        if (isupper(p[i]))
        {
            printf("%c", ((p[i] + k - 65) % 26) + 65);
        }
        // Lowercase formula with ASCII corresponding value 97
        else if (islower(p[i]))
        {
            printf("%c", ((p[i] + k - 97) % 26) + 97);
        }
        else
        {
            // Print plaintext character as is
            printf("%c", p[i]);
        }
    }
    printf("\n");
}