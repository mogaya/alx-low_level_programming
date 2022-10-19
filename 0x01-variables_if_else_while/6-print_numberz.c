/*
 * 6-print_numberz.c
 * Mogaya
 */

#include <stdio.h>

/**
 * main - Prints single digits of base 10 from 0 using putchar
 *
 * Return: Always 0
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		putchar((number % 10) + '0');

	putchar('\n');

	return (0);
}
