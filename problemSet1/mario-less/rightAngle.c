#include <cs50.h>
#include <stdio.h>

// Check the 2nd code without the cs50 library below

int main(void)
{
    int height;
    do
    {
        height = get_int("Enter the height: ");
    }
    while (height < 1);

    // for (int i = height; i > 0; i-- )   // For inverted right angle
    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

// WITHOUT THE cs50 LIBRARY
// int main(void)
// {
//     int i, j, height;
//    printf("Enter height: ");
//     scanf("%d", &height);
//     for (i = 1; i <= height; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("#");  // printf("%d", j); (for printing number instead of #)
//         }
//         printf("\n");
//     }
//     return 0;
// }
