#include <cs50.h>
#include <stdio.h>

int stringLength(string s);

int main(void)
{
    string name = get_string("Name ");
    int length = stringLength(name);
    printf("%i\n", length);
}

int stringLength(string s)
{

    int i = 0;

    // NULL == '\0'
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}



// int main(void)
// {
//     string name = get_string("Name: ");

//     int i = 0;

//     // NULL == '\0'
//     while (name[i] != '\0')
//     {
//         i++;
//     }
//     printf("%i\n", i);
// }