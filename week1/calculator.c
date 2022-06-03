#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // int x = get_int("x: ");
    // int y = get_int("y: ");
    // printf ("%i\n", x + y);

    // long x = get_long("x: ");
    // long y = get_long("y: ");
    // printf ("%li\n", x + y);

    float x = get_float("x: ");
    float y = get_float("y: ");
    float z = x / (float) y;
    printf("%.50f\n", z);
}