#include "main.h"

/**
 *factorial- calclates the factorial of number
 *
 *@n: the number to be calculated
 *
 *Return: if successful return 0
 */

int factorial(int n)
{
int res = n;
	if (n < 0)
return(-1);
	else if (n >= 0 && n <= 0)
return (1);

res *= factorial(n - 1);

return (0);
}
