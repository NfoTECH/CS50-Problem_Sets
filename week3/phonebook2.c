#include <cs50.h>
#include <stdio.h>
#include <string.h>

// To define a new data type. lets you create your own data type
typedef struct
{
    string name;
    string number;
}
person;


int main(void)
{
   person people[2];

   people[0].name  = "Fortune";
   people[0].number = "+234-703-499-9322";

   people[1].name = "David";
   people[1].number = "+1-949-468-2750";

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, "David") == 0)
        {
        printf("Found %s\n", people[i].number);
        return 0;
        }
    }
    printf("Not found\n");
    return 1;
}