#include "main.h"
#include <stdlib.h>

/**
*alloc_grid - Returns a pointer to a 2-dimensional array of
*integers with each element initalized to 0.
*@width: The width of the 2-dimensional array.
*@height: The height of the 2-dimensional array.
*
*Return: If width <= 0, height <= 0, or the function fails - NULL.
*otherwise - a pointer to the 2-dimensional array of integers.
*/
int **alloc_grid(int width, int height)
{
int **a;
int h, w;
if (width <= 0 || height <= 0)
return (NULL);
a = malloc(sizeof(int *) * height);
if (a == NULL)
return (NULL);
for (h = 0; h < height; h++)
{
a[h] = malloc(sizeof(int) * width);
if (a[h] == NULL)
{
for (; h >= 0; h--)
free(a[h]);
free(a);
return (NULL);
}
}
for (h = 0; h < height; h++)
{
for (w = 0; w < width; w++)
a[h][w] = 0;
}
return (a);
}
