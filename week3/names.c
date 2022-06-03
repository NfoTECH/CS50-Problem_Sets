#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"Fortune", "Jennifer", "Ernest", "Emma", "Oluchi"};
    for (int i = 0; i < 5; i++)
    {
        // cs50 function strcmp is string compare taking string s1, string s2 as comparing parameters and 0 as successful
        if(strcmp(names[i], "Emma") == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
// Output is "Found" as input searched string Emma is included in the input array elements