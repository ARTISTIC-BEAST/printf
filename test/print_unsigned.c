#include "main.h"

/**
 * print_intu - prints an unsigned integer
 * @args: list of arguments
 * @buffer: array to handle print
 * Return: number of chars printed
 */

int print_intu(va_list args, char buffer[])
{
	int i = BUFF_SIZE - 2;
	unsigned long int num = va_arg(types, unsigned long int);

	num = convert_size_unsgnd(num, size);

	if (num == 0)
		buffer[i--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';

	while (num > 0)
	{
		buffer[i--] = (num % 10) + '0';
		num /= 10;
	}

	return (write_unsgnd(0, i, buffer));
}

/**
 * print_octal - prints an unsigned octal
 * @args: list of arguments
 * @buffer: buffer array to handle print
 * Return: number of chars
 */

int print_octal(va_list args, char buffer[])
{

	int i = BUFF_SIZE - 2;
	unsigned long int num = va_arg(types, unsigned long int);
	unsigned long int init_num = num;

	UNUSED(width);

	num = convert_size_unsgnd(num, size);

	if (num == 0)
		buffer[i--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';

	while (num > 0)
	{
		buffer[i--] = (num % 8) + '0';
		num /= 8;
	}

	return (write_unsgnd(0, i, buffer));
}

/**
 * print_hexa - prints an unsigned number in hexadecimal notation
 * @args: list of arguments
 * @buffer: buffer array to handle printf
 * Return: number of chars
 */

int print_hexa(va_list args, char buffer[])
{
	return (print_hexa(types, "0123456789abcdef", buffer));
}

/**
 * print_hexa_upper - Prints an unsigned number in upper hexadecimal notation
 * @args: list of args
 * @buffer: buffer array to handle printf
 * Return: number of chars
 */

int print_hexa_upper(va_list args, char buffer[])
{
	return (print_hexa(types, "0123456789ABCDEF", buffer));
}




