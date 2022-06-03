#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"David", "Fortune"};
    string numbers[] = {"+1-949-468-2750", "+234-703-499-9322"};

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(names[i], "Fortune") == 0)
        {
        printf("Found %s\n", numbers[i]);
        return 0;
        }
    }
    printf("Not found\n");
    return 1;
}