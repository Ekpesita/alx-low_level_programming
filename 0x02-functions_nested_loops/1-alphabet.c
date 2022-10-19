#include "main.h"
/**
 * print_alphabet - entry point for code
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);

		alphabet++;
	}

	_putchar('\n');

}
