#include "main.h"
/**
  *_puts - prints a string and ends with a new line
  *@str: the string to br printed
  */
void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str++);
	_putchar('\n');
}
