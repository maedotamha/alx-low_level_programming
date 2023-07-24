#include "main.h"
/**
  * print_rev - print the rivers
  *@s: the string input
  *Return: 0 always
  */
void print_rev(char *s)
{
	int i, leng = 0;

	while (*s != '\0')
	{
		leng++;
		i++;
	}
	s--;
	for (i = leng; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
