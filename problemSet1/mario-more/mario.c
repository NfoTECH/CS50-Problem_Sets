#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Gets height from user
    int height;
    do
    {
        height = get_int("Enter height: ");
    }
    while (height < 1 || height > 8);

    // For each row
    for (int row = 1; row <= height; row++)
    {
        // Print spaces
        // for (int i = height; i > row; i--)
        for (int i = row + 1; i <= height; i++)
        {
            printf(" ");
        }
        // Print left hashes
        for (int j = 1; j <= row; j++)
        {
            printf("#");
        }
        // Print gap in between
        printf("  ");
        // Print right hashes
        for (int k = 1; k <= row; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}
// FOR INVERTED MARIO MORE
// for (int row = height; row > 0; row--)