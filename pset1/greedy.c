//CS50x greedy

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float change;

    //Check Validity
    do
    {
        printf ("Amount of change: ");
        change = get_float();
    }
    while (change < 0);

    //Turn to cents
    int cents = round(change * 100);

    //Check for how many 'quaters'(25¢) we can use
    int count = 0;

    while (cents >= 25)
    {
        cents = cents - 25;
        count++;
    }

    //Check for how many 'dimes'(10¢) we can use
    while (cents >= 10)
    {
        cents = cents - 10;
        count++;
    }

    //Check for how many 'nickels'(5¢) we can use
    while (cents >= 5)
    {
        cents = cents - 5;
        count++;
    }

    //Check for how many 'pennies'(1¢) we can use
    while (cents >= 1)
    {
        cents = cents - 1;
        count++;
    }

    printf ("%i\n", count);

}
