
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        printf("Input height: ");
        scanf("%d", &height);
    }
        while (height < 1 || height > 8);

        // For each row
        for (int row = 1; row <= height; row++)
        {
            // Print space
            for (int i = height; i > row; i--) //for (int i = row + 1; i <= height; i++) // Same output
            {
                printf(" ");
            }
            // Print Hash
            for (int j = 1; j <= row; j++)
            {
                printf("#");                // printf("%d", j); // Prints numbers instead of hash
            }
            printf("\n");
        }
}