#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}


// int main(void)
// {
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 8; j++)
//         {
//             printf("#");
//         }
//         printf("\n");
//     }
// }