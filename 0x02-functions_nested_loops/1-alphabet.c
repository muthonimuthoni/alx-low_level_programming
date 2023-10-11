#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints the lowercase letters
 *
 * Return:0
 */

void print_alphabet(void)
{
        char c = 'a';

        while (c <= 'z')
        {
                _putchar(c);
                c++;
        }
        _putchar('\n');
}
