/*
 * 8-print_base16.c
 * Mogaya
 */

#include <stdio.h>

/**
 * main - Base 16 numbers in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	int number;
	char letter;

	for (number = 0; number < 10; number++)
		putchar((number % 10) + '0');

	for (letter = 'a'; letter < 'g'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
