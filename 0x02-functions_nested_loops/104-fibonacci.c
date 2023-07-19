#include <stdio.h>
/**
  *print_fib_seq - prints fibonaccisequence
  *main - entry place
  *Return: 0
  */
void print_fib_seq(int n)
{
	int a = 1, b = 2, next;

	printf("%d, %d", a, b);
	for (i = 2; i < n; i++)
	{
		next = a + b;
		printf("%d, ", next);
		a = b;
		b = next;
	}
	printf("\n");
}
int main(void)
{
	print_fib_seq(98);
	return (0);
}
