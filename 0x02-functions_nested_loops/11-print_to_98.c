#include <stdio.h>
#include "main.h"
/**
*print_to_98 - Prints all natural numbers from input to 98,
*in order separated by a comma followed by a space.
*@n: The number to begin counting at.
*/
void print_to_98(int v)
{
if (v >= 98)
{
while (v > 98)
printf("%d, ", v--);
printf("%d\n", v);
}
else
{
while (v < 98)
printf("%d, ", v++);
printf("%d\n", v);
}
}
