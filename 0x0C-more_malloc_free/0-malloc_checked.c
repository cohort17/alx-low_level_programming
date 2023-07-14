#include "main.h"
#include <stdlib.h>

/**
*malloc_check - allocates memory to @b using malloc
*@b: the value of bytes to be allocated
*
*Return: it returns the allocate memory pointer
*
*/

void *malloc_checked(unsigned int b)
{
void *p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}
