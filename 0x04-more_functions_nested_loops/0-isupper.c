#include "main.h"
/**
  * _isupper - changes the charachters to uppercase
  * Return: 0 or 1
  *@c: the charachter to be changed
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
