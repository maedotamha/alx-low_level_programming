#include "main.h"
/**
  *swap_int - swaps to values
  *@a: value
  *@b: vaule two
  */
void swap_int(int *a, int *b)
{
	int betw;

	betw = *a;
	*a = *b;
	*b = betw;
}
