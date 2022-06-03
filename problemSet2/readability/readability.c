#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(void)
{
    // Prompt user for input and print out the text
    string text = get_string("Text: ");

    // Count the number of letters in a text
    int letters = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))   // OR if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        {
            letters++;
        }
    }

    //Count the number of words (Number of spaces + 1)
    int words = 1;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == ' ')
        {
            words++;
        }
    }

    // Count the number of sentences (A sentence must end with '.' or '!' or '?')
    int sentences = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }

    // Apply the Coleman-Liau index = (0.0588 * L) - (0.296 * S) - 15.8;

    // Where L is average letters per hundred words = (letters / words) * 100
    float average_letters = letters / (float)words * 100;

    // Where S is average sentences per hundred words = (sentences / words ) * 100;
    float average_sentences = sentences / (float)words * 100;

    // Apply the Coleman-Liau index formula to get the geade level
    float formula = (0.0588 * average_letters) - (0.296 * average_sentences) - 15.8;

    int index = round(formula);         //round up to nearest integer

    // Check for the conditions given
    if (index < 1)
    {
        printf("Before Grade 1\n");
        return 0;
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
        return 0;
    }
    else
    {
        printf("Grade %i\n", index);
    }
    return 0;
}