#include <stdio.h>

/**
 * main - lower case alphabets
 * Description: using char to print alphabet in lower case
 * this program prints alphabet in lower case
 * return: Always (success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
