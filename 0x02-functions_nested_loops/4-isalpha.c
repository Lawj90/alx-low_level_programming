#include "main.h"
/**
 * _isalpha - function to check if c a letter, lowercase or uppercase
 * @c: is the int that will use for the argument of the function
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= '2') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	return (0);
}
