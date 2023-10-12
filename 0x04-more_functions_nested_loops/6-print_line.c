#include "main.h"
#include <unistd.h>

/**
 * print_line - draws a straight line of '_' in the terminal
 * @n: The number of times the character '_' should be printed
 */
void print_line(int n)
{
    if (n <= 0)
    {
        _putchar('\n');
    }
    else
    {
        while (n > 0)
        {
            _putchar('_');
            n--;
        }
        _putchar('\n');
    }
}

