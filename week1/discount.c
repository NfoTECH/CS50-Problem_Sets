#include <cs50.h>
#include <stdio.h>

float discount(float price, int percentage);

int main(void)
{
    float regular = get_float("Regular Price: ");
    int percentOff = get_int("Percent Off: ");
    float sale = discount(regular, percentOff);
    printf("Sale Price: %.2f\n", sale);
}

float discount(float price, int percentage)
{
    return price * (100 - percentage) / 100;
}


// float discount(float price);

// int main(void)
// {
//     float regular = get_float("Regular Price: ");
//     float sale = discount(regular);
//     printf("Sale Price: %.2f\n", sale);
// }

// float discount(float price)
// {
//     return price * 0.85;
// }