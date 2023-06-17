#include <stdio.h>
/**
*main- here is where are code starts, 
*
*it contains the code we want to execute.
*/
int main(void)
{
printf("size of char: %lu byte(s)\n", sizeof(char));
printf("size of short: %lu byte(s)\n", sizeof(short));
printf("size of int: %lu byte(s)\n", sizeof(int));
printf("size of long: %lu byte(s)\n", sizeof(long));
printf("size of float: %lu byte(s)\n", sizeof(float));
printf("size of double: %lu byte(s)\n", sizeof(double));
printf("size of long double: %lu byte(s)\n", sizeof(long double));
return (0);
}
