#include <stdio.h>
/**
*main- enterying data point
*
*Return: recalled value after execcution
*/
int main(void)
{
int v;
for (v = 0; v <= 9; v++)
{
putchar((v % 10) + '0');
if (v == 9)
continue;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
