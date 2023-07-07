#include "main.h"
/**
*_memset- givee the memory area bytes pointed by @s
*and the @b constant byte.
*
*@s: it points to memory area to be filled
*@b: it fills the memory area with character
*@n: it gives the number of bytes to be filled
*
*Return: it gives memory area that @s points to.
*/
char *_memset( char *s, char b, unsigned int n)
{
unsigned int index;
char *memory = s, value = b;
for (index = 0; index < n; index++)
memory[index] = value;
return (memory);
}
