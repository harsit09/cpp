/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/



#include <stdio.h>
#include <math.h>
int main()
{
  double n, result;

  printf("Enter a number to calculate its square root\n");
  scanf("%lf", &n);

  result = sqrt(n);

  printf("Square root of %.2lf = %.2lf\n", n, result);

  return 0;
}