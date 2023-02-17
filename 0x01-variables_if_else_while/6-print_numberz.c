#include <stdio.h>

/**
 * main - prints lowercase alphabets,
 * followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);

}
