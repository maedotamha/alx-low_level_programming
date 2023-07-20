#include "main.h"
/**
  *_isdigit - checks if the given data is a digit
  *Return: 0 if the data is not a digit and 1 if it is
  *@c: the data to be tested
  */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
