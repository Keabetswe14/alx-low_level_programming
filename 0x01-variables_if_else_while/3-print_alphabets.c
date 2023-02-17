#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints the alphabet in lowercase, and then uppercase
 * Return: Always 0
 */
int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
			CH++;
	}
	putchar('\n');
	return (0);
}
