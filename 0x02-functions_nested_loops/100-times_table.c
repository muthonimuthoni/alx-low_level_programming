#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: The times table to print
 */
void print_times_table(int n)
{
    if (n < 0 || n > 15)
        return;

    int i, j, product;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            product = i * j;
            if (j == 0)
                printf("%d", product);
            else
                printf(",   %d", product);

            if (product < 10 && j != n)
                printf(" ");
        }
        printf("\n")
    }
}
