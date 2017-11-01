// CS50 Introduction to Computer Science
// PSET2 Crack

#define _XOPEN_SOURCE
#include <unistd.h>
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //Check for 2 arguments
    if (argc != 2)
    {
        return 1;
    }

    char salt[] = '50';
    char *hash = argv[1];
    char *password = crypt()

    printf("%c\n", hash);
}
