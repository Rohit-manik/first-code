#include <stdio.h>

void main()
{
   int a, b, c, d;
   printf("Enter 2 numbers\n");
   scanf("%d,%d", &a, &b);
   c = a * b;
   d = a / b;
   printf("The multiplication of a*b is %d\n", c);
   printf("The division of a/b is %d", d);
}
