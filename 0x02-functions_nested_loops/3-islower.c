#include "main.h"
/**
*_islower - it checks if character is a lowercase
*
*r: is the character to be checked
*
*Return: it returns 1 if character is in lowercase or 0
*/
int _islower(int r)
{
if (r >= 'a' && r <= 'z')
return (1);
else
return (0);
}
