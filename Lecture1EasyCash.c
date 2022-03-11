// Well, suppose that a cashier owes a customer some change and in that cashier’s drawer are quarters (25¢), dimes (10¢), nickels (5¢), and pennies (1¢). The problem to be solved is to decide which coins and how many of each to hand to the customer. Think of a “greedy” cashier as one who wants to take the biggest bite out of this problem as possible with each coin they take out of the drawer. //
#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float change = get_float("Change: \n");
    int coins = round (change*100);
    int i = 0;
    while (coins >= 25)
    { 
        coins = coins - 25;
        i++;
    }
    while (coins >=10)
    {
        coins=coins-10;
        i++;
    }
    while (coins >=5)
    {
        coins=coins-5;
        i++;
    }
    while (coins>=1)
    {
        coins=coins-1;
        i++;
    }
    printf("Coins: %i\n", i);
}
