#include <stdio.h>
/**
*main-point in which code are input for execution
*
* Return: returns value asigned after execution
*/
int main(void)
{
int pad1, pad2;
for (pad1 = 0; pad1 <= 98; pad1++)
{
for (pad2 = pad1 + 1; pad2 <= 99; pad2++)
{
putchar((pad1 / 10) + '0');
putchar((pad1 % 10) + '0');
putchar(' ');
putchar((pad2 / 10) + '0');
putchar((pad2 % 10) + '0');
if (pad1 == 98 && pad2 == 99)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
