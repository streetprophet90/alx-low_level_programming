#include <stdio.h>

/**
 * main - prints all combinations of two digits
 *
 * Return: Always 0
 *
 */

int main(void)
{
	int ones = '0';
	int tens = '0';

	for (tens = '0' tens <= '0'; tens++) /*print tens digit*/
	{
		for (ones = '0' ones <= '0'; ones++)/*prints ones digit*/
		{
			if (!((ones == tens) || (tens > ones)))/*eliminates repition*/
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens == '8'))/*adds comma and spaces*/
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

