#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // Argument count must be 2
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    // Key must contain only alphabets
    string key = argv[1];
    for (int i = 0; i < strlen(key); i++)
    {
        if (!isalpha(key[i]))
        {
            printf("Usage: ./substitution key\n");
            return 1;
        }
    }
    // Check if key contains 26 characters
    if (strlen(key) != 26)
    {
        printf("Key must contain 26 characters\n");
        return 1;
    }
    // Key must contain unique alphabets
    for (int i = 0; i < strlen(key); i ++)
    {
        for (int j = i + 1; j < strlen(key); j++)
        {
            if (toupper(key[i]) == toupper(key[j]))
            {
                printf("Usage: ./substitution key\n");
                return 1;
            }
        }
    }
    // Prompt user for plaintext
    string plaintext = get_string("plaintext: ");

    // Convert all alphabets in key to UPPERCASE using ASCII A - a difference of 32
    for (int i = 0; i < strlen(key); i++)
    {
        if (islower(key[i]))
        {
            key[i] = key[i] - 32;
        }
    }
    printf("ciphertext: ");

    // Print the ciphertext
    for (int i = 0; i < strlen(plaintext); i++)
    {
        if (isupper(plaintext[i]))
        {
            int text = plaintext[i] - 65;
            printf("%c", key[text]);
        }
        else if (islower(plaintext[i]))
        {
            int text = plaintext[i] - 97;
            printf("%c", key[text] + 32);
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
}