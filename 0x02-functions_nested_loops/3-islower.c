#include "main.h"

/**
 * _islower - functon that show lowercase letters
 *
 * Return: 0(Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
