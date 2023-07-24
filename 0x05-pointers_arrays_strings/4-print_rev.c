#include "main.h"
/**
  * print_rev - print the rivers
  *@s: the string input
  *Return: 0 always
  */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (i -= 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
