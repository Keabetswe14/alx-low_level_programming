#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints alphabets in lower case
 * Return: Always 0
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
