#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - prints the lowercase alphabets
 *
 * Return: 0
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

/**
 * main - program entry point
 *
 * Return:0 (success)
 */

int main(void)
{
	print_alphabet();
	return (0);
}
