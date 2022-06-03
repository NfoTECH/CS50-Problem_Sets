#include <stdio.h>
#include <stdlib.h>

// The output of this program is some garbage numbers
// 194777632  32766  0
// Due to iteration over scores that had no values

int main(void)
{
    int scores[3];

    for (int i = 0; i < 3; i++)
    {
        printf("%i\n", scores[i]);
    }
}