#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("How many scores? ");

    int scores[n];

    for (int i = 0; i < n; i++)
    {
        scores[i] =get_int("Scores: ");
    }
    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}

// int main(void)
// {
//     int scores[3];

//     scores[0] = 72;
//     scores[1] = 73;
//     scores[2] = 33;

//     printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
// }


// int main(void)
// {
//     int score1 = 12;
//     int score2 = 23;
//     int score3 = 33;

//     printf("Average: %f\n", (score1 + score2 + score3) / 3.0);
// }