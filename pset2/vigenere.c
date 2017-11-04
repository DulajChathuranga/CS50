// CS50 Introduction to Computer Science
// PSET2 - Vigenere - vigenere.c

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //Check for 2 arguments.
    if (argc != 2)
    {
        printf ("Usage: ./vigenere AbcD\n");
        return 1;
    }

    //Continue if argv[1] only have alphabetic texts.
    for (int a = 0; a < strlen(argv[1]); a++)
    {
        if (isalpha(argv[1][a]))
        {
            continue;
        }
        else
        {
            printf("Enter only Alphabetic Characters!\n");
            return 1;
        }
    }

    printf("plaintext: ");
    char *text = get_string();
    printf ("ciphertext: ");

    char *keys = argv[1];
    int alpha = 0; //Counting alphabetical characters.

    //Check for each text
    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            int mod = alpha % strlen(keys);

            /*  Ciphing each character by grouping  by using 'Counting off' method.
                Ex: If keys have 3 characters,
                    0 % 3 = 0; 1 % 3 = 1; 2 % 3 = 2; 3 % 3 = 0, 4 % 3 = 1;
            */

            for ( int j = 0; j < strlen(keys); j++)
            {
                if (mod == j)
                {
                    int k, x; //k = keys[j], x = text[i];

                    //Convert key[j] to alphabetical index
                    if (isupper(keys[j]))
                    {
                        k = keys[j] - 65;
                    }
                    if (islower(keys[j]))
                    {
                        k = keys[j] - 97;
                    }

                    //Ciphing each text
                    if (isupper(text[i]))
                    {
                        x = text[i] - 65;   //x = Alphabetical index
                        x = (x + k) % 26;   //x = Cipher alpahabetical index
                        x = x + 65;         //x = Cipher ASCII code
                        printf ("%c", x);
                    }
                    if (islower(text[i]))
                    {
                        x = text[i] - 97;
                        x = (x + k) % 26;
                        x = x + 97;
                        printf ("%c", x);
                    }
                }
            }

            alpha++;
        }
        else
        {
            printf ("%c", text[i]);
        }
    }

    printf ("\n");
    return 0;

}
