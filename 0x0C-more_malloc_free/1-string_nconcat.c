#include "main.h"
#include <stdlib.h>

/**
*string_nconcat - concatenates two strings using the inputted
*bytes numbers
*@s1: it is the first string
*@s2: it is the second string
*@n: the number of bytes s2 to be concatenated to s1
*
*Return: give NULL if code fails or
*the memory space pointer concatenated 
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *conc;
unsigned int dx = n, idx;
if (s1 == NULL)
s1 = "";
if (idx =0; s1[idx]; idx++)
dx++;
conc = malloc(sizeof(char) * (dx + 1));
if (conc == NULL)
return (NULL);
dx = 0;
for (idx = 0; s1[idx]; idx++)
conc[dx] = s1[idx];
for (idx = 0; s2[dx]; && idx < n; idx++)
conc[dx] = s2[idx];
conc[dx] = '\0';
return (conc);
}
