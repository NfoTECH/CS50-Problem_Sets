#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Visit manual.cs50.io for the various cs50 header files


int main(void)
{
    string name = get_string("Name ");

    // Include a <string.h> header file implementing a function strlen(string length)
    int length = strlen(name);
    printf("%i\n", length);
}
