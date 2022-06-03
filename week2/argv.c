#include <cs50.h>
#include <stdio.h>


/**
 * @param argc Argument Count - an int storing the no of typed words in the prompt
 * @param argv Argumenet vector - an array of all the typed words int he prompt
*/

int main(int argc, string argv[])
{
    // The total no of words typed at the command == 2. Note program name(argv) is one word
    if (argc == 2)
    {
        // argv[1] is input word after the program name at arg[0]
        printf("hello, %s\n", argv[1]);
    }
    else
    {
        printf("hello, world\n");
    }
}