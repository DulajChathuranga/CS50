//Mario more comfortable version


#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;

    //Check for valid number between 0-23
    do
    {
        printf ("Height: ");
        height = get_int();
    }
    while (height < 0 || height > 23);

    {

        for (int i = 0; i < height; i++) //Line Number = i
        {
            //Left Side
            for (int j = 0; j <= height - (i + 1); j++ ) //'Space' current printing position = j
            {
                if (j < height - (i + 1))
                {
                    printf (" ");
                }

                else
                {
                    for (int x = 0; x <= i + 1; x++) //# current printing position = x
                    {
                        if (x < i + 1)
                        {
                            printf ("#");
                        }

                        else
                        {
                            printf ("  ");

                            //Right Side
                            for (int y = 0; y < i + 1; y++) //Right side # current printing position = y
                            {
                                printf ("#");
                            }
                        }
                    }

                    printf ("\n");
                }
            }
        }
    }
}
