#include "main.h"
#include <unistd.h>

/**
 * more_numbers - prints numbers from 0 to 14, repeated 10 times, followed by a new line.
 */
void more_numbers(void)
{
    int i, num;

    for (i = 0; i < 10; i++)  // Repeats 10 times
    {
        for (num = 0; num <= 14; num++)  // Numbers from 0 to 14
        {
            if (num > 9) // For two-digit numbers
            {
                _putchar((num / 10) + '0');
            }
            _putchar((num % 10) + '0');
        }
        _putchar('\n');
    }
}

