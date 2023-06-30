#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;

  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to modify p
   * - you are not allowed to use a
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */

  *(int *)((char *)&n + offsetof(struct { int x; }, x)) = 98;

  printf("a[2] = %d\n", a[2]);
  return 0;
}
