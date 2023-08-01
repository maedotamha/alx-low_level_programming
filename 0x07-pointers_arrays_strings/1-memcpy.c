#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: bumber of byted
 *
 * Return: copied memory with n byte changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
        int a = 0;
        int b = n;

        for (; a < b; a++)
        {
                dest[a] = src[a];
                n--;
        }
        return (dest);
}
