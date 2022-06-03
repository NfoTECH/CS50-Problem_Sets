#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Missing command-line argument\n");
        // Return value of any no as uncussesful besides 0. 1 is commonly used
        return 1;
    }
    else
    {
        printf("hello, %s\n", argv[1]);
        // Return 0 meaning that all went well(sucessful)
        return 0;
    }
}