/*
 * 7-print_tebahpla.c
 * Mogaya
 */

#include <stdio.h>

/**
 * main - Alphabet in reverse
 *
 * Return: Always 0
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
