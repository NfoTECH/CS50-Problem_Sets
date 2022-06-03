#include <cs50.h>
#include <stdio.h>

// NO ARGUMENT
// int main(void)
// {
//     string name = get_string("What is your name? ");
//     printf("Hello, %s\n", name);
// }



// FOR MULTIPLE COMMAND LINE ARGUMENTS
int main(int argc, char *argv[])
{
    if (argc > 1)
    {
        printf("Hello");
        for (int i = 1; i < argc; i++)
        {
            printf(" %s", argv[i]);
        }
        printf("\n");
    }
    else
    {
        printf("Hello, there!\n");
    }
    return 0;
}



// FOR ONLY 2 COMMAND LINE ARGUMENTS
// int main(int argc, char *argv[])
// {
//     if (argc == 2)
//     {
//         printf("Hello, %s\n", argv[1]);
//     }
//     else
//     {
//         printf("Hello, there!\n");
//     }
//     return 0;
// }