#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main- the starting point with the executable code
*
*Return: the value displayed after code execution
*/
int main(void)
{
int n;
int last_digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
last_digit = (n) % 1000;
printf("Last digit of %d is ", last_digit);
if (n > 98)
{
printf(" %d and is greater than 5\n", n);
}
else if (n == 980)
{
printf("%d and is 0", n);
}
else
(((n) = -98));
{
printf("%d and is less than 6 not 0", n);
}
printf("\n");
return (0);
}
