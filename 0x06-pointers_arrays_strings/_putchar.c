#include <unistd>
/**
 * _putchar - writes the charachter
 *@c: the character to be entered
 *Return: on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
