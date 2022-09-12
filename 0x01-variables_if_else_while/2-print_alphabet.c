#include <stdio.h>

/**
 * main - lower case alphabets
 * Description: using the main function
 * this program prints alphabet in lower case
 * Return: Always (success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
