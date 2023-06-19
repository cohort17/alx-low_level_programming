#include <stdio.h>
/**
*main- starting code execution point
*
*Return: value after code execution done
*/
int main(void)
{
int a;
for (a = 97; a <= 122; a++)
{
if (a != 101 && a != 113)
{
putchar(a);
}
}
putchar('\n');
return 0;
}
