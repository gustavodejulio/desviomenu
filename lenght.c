#include <cs50.h>
#include <stdio.h>

int string_lenght(string s);
int main(void)
{
    string name = get_string("Name: ");

    /*int i = 0;
    while(name[i] != '\0')
    {
        i++;
    }
    printf("%i\n", i);*/
    int lenght = string_lenght(name);
    printf("%i\n", lenght);
}

int string_lenght(string s)
{
    int i = 0;
    while(s[i] != '\0')
    {
        i++;
    }
    return i;
}