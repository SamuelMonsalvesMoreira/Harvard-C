#include <stdio.h>
#include <cs50.h>
#include <math.h>

int get_cents(void);
int calculoQuarters(int coins);
int calculoDimes(int coins);
int calculoNickels(int coins);
int calculoPennies(int coins);

int main(void)
{
    int coins = get_cents();

    int quarters = calculoQuarters(coins);
    coins = coins - quarters * 25;

    int dimes = calculoDimes(coins);
    coins = coins - dimes * 10;

    int nickels = calculoNickels(coins);
    coins = coins - nickels * 5;

    int pennies = calculoPennies(coins);
    coins = coins - pennies * 1;

    int total_coins = quarters + dimes + nickels + pennies;

    printf("%i\n", total_coins);
}

int get_cents(void)
{
    int coins;
    do
    {
        coins = get_int("Digite o valor em centavos: ");
    }
    while (coins < 0);
    return coins;
}

int calculoQuarters(int coins)
{
    int quarters = 0;
    while (coins >= 25)
    {
        coins = coins - 25;
        quarters++;
    }
    return quarters;
}

int calculoDimes(int coins)
{
    int dimes = 0;
    while (coins >= 10)
    {
        coins = coins - 10;
        dimes++;
    }
    return dimes;
}

int calculoNickels(int coins)
{
    int nickels = 0;
    while (coins >= 5)
    {
        coins = coins - 5;
        nickels++;
    }
    return nickels;
}

int calculoPennies(int coins)
{
    int pennies = 0;
    while (coins >= 1)
    {
        coins = coins - 1;
        pennies++;
    }
    return pennies;
}