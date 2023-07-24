#include "main.h"
/**
  *print_array - Prints n elements of an array
  *@a: Array of ints
  *@n: numbers of the array to printed
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
