#include <stdio.h>
//#include <cs50.h>

int main(void)
{
    int h;
    do
    {
        printf("Height: ");
        scanf("%i", &h);
        //h = get_int("Height: ");
    }
    while (h < 1 || h > 8);

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < h; j++)
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
    return 0;
}
// FOR INVERTED MARIOLESS
// for (int i = h-1; i >= 0; i--)