#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*print_tab - prints an array of string
*@tab: the array to be print
*
*Return: nothing to be returned.
*/
void print_tab(char **tab)
{
int i;
for (i = 0; tab[i] != NULL; ++i)
{
printf("%s\n", tab[i]);
}
}

/**
*main - chesks the code for ALX school students
*
*Return: gives 0 if successful and 0 if error occurs
*
*/

int main(void)
{
char **tab;
tab = strtow("     ALX School    #cisfun     ");
if (tab == NULL)
{
printf("fail\n");
return(1);
}
print_tab( tab);
return (0);
}
