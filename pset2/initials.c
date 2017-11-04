//CS50 Problem Set 2 | Initials (more)

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char *name = get_string();


    for (int i = 0; i < strlen(name); i++)
    {
        //Check first letter.
        if (i == 0 && name[i] != ' ')
        {
            printf("%c", toupper(name[i]));
        }

        //Check for next letters.
        if (i > 0 && name[i] != ' ' && name[i-1] == ' ')
        {
            printf("%c", toupper(name[i]));
        }
    }

    printf("\n");

}
