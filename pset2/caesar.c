// CS50 Introduction to Computer Science
// PSET2 Caesar

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //Check whether 2 arguments available
    if (argc != 2)
    {
        return 1;
    }

    printf ("plaintext: ");
    char *text = get_string();
    printf ("ciphertext: ");

    int k = atoi(argv[1]); //Turn arg1 to int

    //Check for each text
    for (int i = 0; i < strlen(text); i++)
    {
        //Check whether current text is alhabetical.
        if (isalpha(text[i]))
        {
            int x;

            //Check for Upper Case text
            if (isupper(text[i]))
            {
                x = text[i] - 65;   //x = Alphabetical index
                x = (x + k) % 26;   //x = Cipher alpahabetical index
                x =  x + 65;        //x = Cipher ASCII code
                printf ("%c", x);
            }

            //Check for Lower Case text
            if (islower(text[i]))
            {
                x = text[i] - 97;
                x = (x + k) % 26;
                x = x + 97;
                printf ("%c", x);
            }
        }

        else
        {
            printf ("%c", text[i]);
        }
    }

    printf ("\n");
    return 0;
}
