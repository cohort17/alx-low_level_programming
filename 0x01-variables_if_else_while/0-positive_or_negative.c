#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main- entrying point for code to be executed.
*
*Return: the value to return after execution is done.
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("%d\n", n);
if (n > 0)
{
printf("is positive");
}
else if (n < 0)
{
printf("is negative");
}
else
{
printf("is zero");
}
return (0);
}
