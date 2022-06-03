#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // For comparing strings
    char *s = get_string("s: ");
    char *t = get_string("t: ");

     if(strcmp(s, t) == 0)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
    
    // For comparing numbers
    // int i = get_int("i: ");
    // int j = get_int("j: ");

    // if(i == j)
    // {
    //     printf("Same\n");
    // }
    // else
    // {
    //     printf("Different\n");
    // }
}
