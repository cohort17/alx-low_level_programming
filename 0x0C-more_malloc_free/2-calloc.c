#include "main.h"
#include <stdlib.h>

/**
*_calloc - Allocates memory for an array of a certain number
*of elements each of an inputted byte size.
*@nmemb: The number of elements.
*@size: The byte size of each array element.
*
*Return: If nmemb = 0, size = 0, or the function fails - NULL.
*otherwise - a pointer to the allocated memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *mx;
char *rpl;
unsigned int idx;
if (nmemb == 0 || size == 0)
return (NULL);
mx = malloc(size * nmemb);
if (mx == NULL)
return (NULL);
rpl = mx;
for (idx = 0; idx < (size * nmemb); idx++)
rpl[idx] = '\0';
return (mx);
}
