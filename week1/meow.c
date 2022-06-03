#include <cs50.h>
#include <stdio.h>


// A prototype of the meow fuction(before the main fuction)
void meow(int n);

// The main fuction
int main(void)
{
        // Calling the meow function
        meow(5);
}

// The meow function definition
void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
    printf("meow\n");
    }
}