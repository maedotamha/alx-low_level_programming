#include "main.h"
/**
  *puts2 - function thats prints only one char
  *@str: Input
  *Return: void
  */
void puts2(char *str)
{
	int leng = 0, t = 0, o;
	char *y = str;

	while (*y != '\0')
	{
		y++;
		leng++;
	}
	t = leng - 1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[0]);
		}
	}
	_putchar('\n');
}
