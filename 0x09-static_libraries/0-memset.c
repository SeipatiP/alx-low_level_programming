#include "main.h"
/**
 * _memset - Program that fills a block of memory with a specific value
 * @s: starting to a ddress memory that should be filled
 * @b: the desired value
 * @n: numbber of bytes to be changed
 *
 * Return: change array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
