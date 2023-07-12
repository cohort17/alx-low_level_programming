#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*main - checks the code for ALX School students
*@av: it's the address of the pointer
*@ac: it's the second address
*
*Return: return 0 if successful.
*
*/

int main(int ac; char *av[])
{
char *s;
s = argstostr(ac, av);
if (s == NULL)
{
return (1);
}
printf("%s", s);
free(s);
return (0);
}
