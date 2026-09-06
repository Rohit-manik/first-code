#include <stdio.h>

void main()
{

   float a, b, c, d;
   printf("Enter two numbers\n");
   scanf("%f %f", &a, &b);
   c = a + b;
   d = a - b;
   printf("Sum of a+b is %f\n", c);
   printf("difference of a-b is %f", d);
}
