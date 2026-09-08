#include <stdio.h>

void main()
{
   float a, b, c, d;
   printf("Enter 2 numbers\n");
   scanf("%f %f", &a, &b);
   c = a * b;
   d = a / b;
   printf("The multiplication of a*b is %f\n", c);
   printf("The division of a/b is %f", d);
}
