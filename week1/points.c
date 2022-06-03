#include <cs50.h>
#include <stdio.h>

int main(void)
{
    const int myPoints = 2;
    int points = get_int("How many points did you lose? ");

    if (points < myPoints)
    {
        printf("You lost FEWER points than me.\n");
    }
    else if (points > myPoints)
    {
        printf("You lost MORE points than me.\n");
    }
    else
    {
        printf("You lost SAME points as me.\n");
    }
}