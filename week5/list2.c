#include <stdio.h>
#include <stdlib.h>

// Introducing realloc
int main(void)
{
    // Dynamically allocate an array of size 3
    int *list = malloc(3 * sizeof(int));
    if (list == NULL)       // A safety check
    {
        return 1;           // Unsuccessfull. Quit
    }

    // Assign three numbers to that array
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // Time passes

    // Resize old array to be of size 4
    int *tmp = realloc(list, 4 * sizeof(int));      // Passing both the address and the size
    if (tmp == NULL){       // A safety check

        free(list);         // Free some memory after using malloc
        return 1;           // Just quit as unsuccessful
    }

    // Copy values from the old array list into the new temporary array list
    // for (int i = 0; i < 3; i++)
    // {
    //     tmp[i] = list[i];
    // }
    // Add 4th number to new temporary array
    tmp[3] = 4;

    // free(list);             // Free old array memory

    list = tmp;  // To remember the address of the new chunk of memory in the new array list variable

    // Print the new array list
    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }
    free(list);             // Free new array memory
    return 0;
}