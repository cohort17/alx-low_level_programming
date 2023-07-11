#include "main.h"
#include <stdio.h>
#include <stdlib>

/**
*main - checks the code for ALX School students
*
*Return: give 0 if successful
*/
int main(void)
{
char *s;
s = str_concat("Betty", "Holberton");
if (s == NULL)
{
printf("failed\n");
return(1);
}
printf("%s\n", s);
free(s);
return (0);
}
