#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int numbers[] = {4,6,8,2,7,5,0};
    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == 1)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
// Output is "Not found" as 1 is not an element in the defined array