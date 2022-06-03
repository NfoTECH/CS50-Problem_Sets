#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *s = get_string("s: ");

    // To allocate memory use malloc(stringLength + 1) as 1 is for \0
    char *t = malloc(strlen(s) + 1);
    if (t == NULL)          // If there is no available memory space. 1 is for unsuccessful
    {
        return 1;
    }

    // Copy s to t
    strcpy(t, s);

    // To be sure something is typed on the prompt, stringLength must be greater than 0
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);
}

// Using for loop in place of strcopy(t, s)
//for (int i = 0; i < strlen(s) + 1; i++)
// {
//     t[i] = s[i];
// }