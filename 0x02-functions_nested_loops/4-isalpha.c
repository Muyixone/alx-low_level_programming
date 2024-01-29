#include "main.h"
/**
 * _isalpha - Checks if c is a lowercase or uppercase character
 * @c: Character to be checked
 *
 * Return: 1 if c is uppercase or lowercase, 0 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
