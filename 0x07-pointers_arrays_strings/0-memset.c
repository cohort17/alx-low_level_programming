#include "main.h"
/**
*memset- givee the memory area bytes pointed by @s
*and the @c constant byte.
*
*@s: it points to memory area to be filled
*@c: it fills the memory area with character
*@n: it gives the number of bytes to be filled
*
*Returm: gives @s memory area it points to.
*/
void *_memset(void *s, int c, size_t n)
{
unsigned int index;
unsigned char *memory = s, value = c;
for (index = 0; index < n; index++)
memory[index] = value;
return (memory);
}
