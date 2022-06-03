#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    do
    {
        h = get_int("Height: ");
    }
    while (h < 1 || h > 8);

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < (h - 1 + i) + 1; j++)
        {
            if (i + j < h - 1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
}