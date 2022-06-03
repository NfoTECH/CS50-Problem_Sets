#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get string with the get_string function
    string name = get_string("What's your name? ");

    // Print using %s
    printf("Hello, %s\n", name);
}