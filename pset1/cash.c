// Find the minimum number of coins

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int cents;
int coins_number;
void count_coins(int coin_value);

int main(void)
{
    float f;
    do
    {
        f = get_float("Change owed: ");
    }
    while (f < 0);

    // Convert float input to integer (value in cents)
    cents = round(f * 100);

    coins_number = 0;

    // Quarters
    count_coins(25);

    // Dimes
    count_coins(10);

    // Nickels
    count_coins(5);

    // Pennies
    count_coins(1);


    printf("%i\n", coins_number);
}

// Count coins needed for the corresponding value
void count_coins(int coin_value)
{
    coins_number += cents / coin_value;
    cents = cents % coin_value;
}
