#include <stdio.h>


int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;
 /*
  * You need to write your line of code here...
  * Remember that;
  * - usage of a is not allowed
  * - Not allowed to modify p
  * - Make only one statement
  * - You are not allowed to code anything else than this line of code
 */
*(p + 5) = 98;
/* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}
