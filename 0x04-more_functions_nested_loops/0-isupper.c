#include "main.h"
/**
 *  _isuper -checking for uppercase
 *  @c: value to be checked
 *  Return: success
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
