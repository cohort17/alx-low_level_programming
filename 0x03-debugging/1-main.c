#include <stdio.h>
/**
* main - causes an infinite loop
* Return: 0
*/
int main(void)
{
int i;
printf("Infinite loop incoming :(\n");
i = 0;
/*the loop is not incremented
*and i should be i < 1
*/
while (i < 10)
{
putchar(i);
}
printf("Infinite loop avoided! \\o/\n");
return (0);
}
