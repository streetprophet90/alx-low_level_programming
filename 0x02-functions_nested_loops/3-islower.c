#include "main.h"

/**
 * _islower - Entry point
 * Description: checks is a character is lowecase
 * @c: the integer value it receives
 * Return: 1 if letter is lowercase  0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
