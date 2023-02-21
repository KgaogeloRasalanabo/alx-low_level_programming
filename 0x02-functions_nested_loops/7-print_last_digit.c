#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - main function
 *
 * @n: integer to get last digit of
 * Return: last digit of i
 *
 */

int print_last_digit(int i)
{
	_putchar('0' + _abs(i % 10));
	return (_abs(i % 10));
}
