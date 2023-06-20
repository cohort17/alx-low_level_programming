#include <stdio.h>
/**
*main - code entrying point
*
*Return: value returned if execution is done
*/
int main(void)
{
int dial_1, dial_2, dial_3;
for (dial_1 = 0; dial_1 < 8; dial_1++)
{
for (dial_2 = dial_1 + 1; dial_2 < 9; dial_2++)
{
for (dial_3 = dial_2 + 1; dial_3 < 10; dial_3++)
{
putchar((dial_1 % 10) + '0');
putchar((dial_2 % 10) + '0');
putchar((dial_3 % 10) + '0');
if (dial_1 == 7 && dial_2 == 8 && dial_3 == 9)
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
