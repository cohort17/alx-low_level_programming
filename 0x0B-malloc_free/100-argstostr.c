#include "main.h"
#include <stdlib.h>
/**
*argstostr - Concatenates all arguments 
*of the program into a string; arguments are separated 
*by a new line in the string.
*@ac: The number of arguments passed to the program.
*@av: An array of pointers to the arguments.
*
*Return: If ac == 0, av == NULL, or the function fails - NULL.
*Otherwise - a pointer to the new string.
*/
char *argstostr(int ac, char **av)
{
char *s;
int a, b, idx, size = ac;
if (ac == 0 || av == NULL)
return (NULL);
for (a = 0; a < ac; a++)
{
for (b = 0; av[a][b]; b++)
size++;
}
s = malloc(sizeof(char) * size + 1);
if (s == NULL)
return (NULL);
idx = 0;
for (a = 0; a < ac; a++)
{
for (b = 0; av[a][b]; b++)
s[idx++] = av[a][b];
s[idx++] = '\n';
}
s[size] = '\0';
return (s);
}
