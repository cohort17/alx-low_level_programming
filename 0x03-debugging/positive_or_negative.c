#include "main.h"
#include <stdio.h>
/**
*positive_or_negative( int i)- checks if th number is positive or negative
*@i: is the number to be checked.
*/
void positive_or_negative(int i)
{
if (i > 0)
printf("%d is positive\n", i);
else if (i < 0)
printf("%d is negative\n", i);
else
printf("0 is neither positive nor negative\n");
}
