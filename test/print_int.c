#include "main.h"

/**
 * print_int - function that prints an integer number
 * @n: number to print
 * @args: number of arguments
 * Return: n
 */

int print_int(va_list args, int n)
{
	int num = va_arg(args, int);
	int vals = 0;
	int temp = num;
	int val;

	if (num < 0)
	{
		n += _putchar('-');
		num = -num;

		temp = num;
	}

	do {
		vals++;
		temp /= 10;
	} while (temp != 0);

	while (vals > 0)
	{
		int pow10 = 1;
		int i;

		for (i = 1; i < vals; i++)
		{
			pow10 *= 10;
		}
		val = num / pow10;
		n += _putchar(val + '0');
		num -= val * pow10;
		vals--;
	}
	return (n);
}



