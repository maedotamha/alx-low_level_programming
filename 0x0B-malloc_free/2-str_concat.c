#include <stdlib.h>
#include "main.h"
/**
 * str_concat -  concatenates two strings
 * @s1: input
 * @s2: input
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *con;
	int i, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = ci = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;
	con = malloc(sizeof(char) * (i + ci + 1));
	if (con == NULL)
		return (NULL);
	i = ci = 0;
	while (s1[i] != '\0')
	{
		con[i] = s1[i];
		i++;
	}
	while (s2[ci] != '\0')
	{
		con[i] = s2[ci];
		i++, ci++;
	}
	con[i] = '\0';
	return (con);
}
