#include "main.h"

/*8
 * _strncpy - function that copies a string
 * @src: pointer to source string
 * @dest: pointer to destinationn string
 * @n: number of max characters to copy from src
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0; k < n && *(src + k); k++)
	{
		*(dest + k) = *(src + k);
	}
	for (; k < n; k++)
	{
		*(des + k) = '\0';
	}
	return (dest);
}
