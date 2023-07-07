#include "main.h"
/**
*_islower - it checks if character is a lowercase
*
*@c: is the character to be checked
*
*Return: it returns 1 if character is in lowercase or 0
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
