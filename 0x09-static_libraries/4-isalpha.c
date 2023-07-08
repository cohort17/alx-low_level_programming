#include <stdio.h>
#include "main.h"
/**
*_isalpha- it print character if it is alphabet
*
*@n: is the character to be checked
*Return: it displays 0
*/
int _isalpha(int n)
{
if ((n >= 'a' && n <= 'z') ||
(n >= 'A' && n <= 'Z'))
return (1);
else
return (0);
}
