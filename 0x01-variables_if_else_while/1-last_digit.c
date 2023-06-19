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
last_digit = abs(n) % 10;
printf("Last digit of %d is", last_digit);
if( last_digit > 5)
{
printf(" and is greater than 5\n");
}
else if( last_digit == 0)
{
printf(" and is 0\n");
}
else
{
printf(" and is less than 6 not 0\n");
}
return (0);
}
