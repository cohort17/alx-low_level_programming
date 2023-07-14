#include "main.h"
#include <stdlib.h>

/**
*_realloc - it reallocate a memory block using
*malloc and free
*@ptr: it is a pointer to allocad meprevious memory
*@old_size: the bytes size for ptr allocated space
*@new_size: the bytes size for the new memory block
*
*Return: gives ptr if new_size == old_size
*if new_size == 0 and ptr != NULL, gives NULL
*or give the pointer to the reallocated block of memory
*
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *mx;
char *n_copy, *rpl;
unsigned int idx;
if (new_size == old_size)
return (ptr);
if (ptr == NULL)
{
mx = malloc(new_size);
if (mx == NULL)
return (NULL);
return (mx);
}

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
n_copy = ptr;
mx = malloc(sizeof(*n_copy) * new_size);
if (mx == NULL)
{
free(ptr);
return (NULL);
}
rpl = mx;
for (idx = 0; idx < old_size && idx < new_size; idx++)
rpl[idx] = *n_copy++;
free(ptr);
return (mx);
}
