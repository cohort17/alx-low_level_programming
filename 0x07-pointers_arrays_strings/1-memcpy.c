#include "main.h"
/**
* _memcpy -Copies @n bytes from the memory area pointed
*to by @src into that pointed to by @dest.
*
*@dest: A pointer to the memory area to copy @src into
*@src: it a source where character will be copied from.
*@n: it gives the number of bytes to be copied from @src
*
*Return: it value is pointer to the destination buffer @dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int index;
char *destination = dest;
char *source = src;
for (index = 0; index < n; index++)
destination[index] = source[index];
return (dest);
}
