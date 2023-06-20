#include <stdio.h>
/**
*main- entrying point for executable code
*
*Return: value displayed after code execution
*
*/
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return 0;
}
