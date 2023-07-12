#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*main - check the code for ALX school student
*
*Return: value given if successful is 0
*/
int main(void)
{
char *s;
s = _strdup("ALX SE");
if (s == NULL)
{
printf("failed to allocate memory\n");
return (0);
}
printf("%s\n", s);
free(s);
return (0);
}
