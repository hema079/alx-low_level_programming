/*
 * File: 9-print_comb.c
 * Auth: Ibrahim M zayed
 */

#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */

int main(void)
{	int num = 48;
	while (num <= 57)
	{
	putchar(num);
	if (num != 57)
	{
	putchar(',');
	putchar(' ');
	}
	num++;
	}
	putchar('\n');
	return (0);
}
