#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int *x = malloc(3 * sizeof(int));

    x[0] = 72;
    x[1] = 73;
    x[2] = 33;
    free(x);
}

// Below was the intial code which had some bugs
// The errors were detected by running valgrind ./memory
// Error1: Exceeded boundary of memory allocation [0]-[2] of 3 size not [1]-[3]
// Error2: The memory was not freed at the end by the function free(x)

// int main(void)
// {
//     int *x = malloc(3 * sizeof(int));

//     x[1] = 72;
//     x[2] = 73;
//     x[3] = 33;
// }