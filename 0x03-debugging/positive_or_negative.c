#include <stdio.h>
#include "main.h"
/**
*positive_or_negative - tests function that prints 
*if an integer is positive or negative
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
