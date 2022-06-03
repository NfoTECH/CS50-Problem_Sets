#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        printf("Height: ");
        scanf("%d", &height);
    }
    while ( height < 1);

    for (int row = 1; row <= height; row++)
    {
        for (int i = 1; i <= height - row; i++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (2 * row) - 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
// FOR INVERTED PYRAMID
// for (int row = height; row > 0; row--)