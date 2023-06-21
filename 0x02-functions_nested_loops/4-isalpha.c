#include <stdio.h>
#include "main.h"
/**
*_isalpha- it print character if it is alphabet
*
*@r: is the character to be checked
*Return: it displays 0
*/
int _isalpha(int r)
{
if ((r >= 'a' && r <= 'z') ||
(r >= 'A' && r <= 'Z'))
return (1);
else
return (0);
}
