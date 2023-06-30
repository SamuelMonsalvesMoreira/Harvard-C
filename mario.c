#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int tamanho, row = 0, column, space;

    do
    {
        tamanho = get_int("Digite o tamanho: ");
    }
    while (tamanho < 1 || tamanho > 8);

    for (row = 0; row < tamanho; row++)
    {
        for (space = 0; space < tamanho - row - 1; space++)
        {
            printf(" ");
        }

        for (column = 0; column <= row; column++)
        {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}




