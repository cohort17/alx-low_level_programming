#include <stdio.h>
/**
*main - executable code input point
*
*Return: display value after execution
*/
int main(void)
{
int var_1, var_2;
for (var_1 = 0; var_1 < 9; var_1++)
{
for (var_2 = var_1 + 1; var_2 < 10; var_2++)
{
putchar((var_1 % 10) + '0');
putchar((var_2 % 10) + '0');
if (var_1 == 8 && var_2 == 9)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
