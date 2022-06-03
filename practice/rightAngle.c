#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int h;
    do
    {
        h = get_int("Height: ");
    }
    while(h < 1);

    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
// FOR INVERTED RIGHT ANGLE
// for (int i = h; i > 0; i--)