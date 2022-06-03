#include <stdio.h>

// Without the cs50 library involving get_int

int main(void)
{
    int height;

    do
    {
    printf("Enter height: ");
    scanf("%d", &height);
    }
    while (height < 1 || height > 8);

    // For each row
    for (int row = 1; row <= height; row++)
    {
        // Print space
        for (int i = 1; i <= height - row; i++)
        {
            printf(" ");
        }
        // Print Hash
        for (int j = 1; j <= (2 * row) - 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
// FOR INVERTED PYRAMID
//for (int row = height; row > 0; row--)