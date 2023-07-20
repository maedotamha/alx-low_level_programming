#include "main.h"
/**
  * _isupper - changes the charachters to uppercase
  *Return: always 0
  *@c: the charachter to be changed
  */
int _isupper(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
