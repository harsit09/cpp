#include <stdio.h>
#include <math.h>
int main()
{
  double a, b, c, s, area;

  printf("Enter sides of a triangle\n");
  scanf("%lf%lf%lf", &a, &b, &c);

  s = (a+b+c)/2; // Semiperimeter


  area = sqrt(s*(s-a)*(s-b)*(s-c));

  printf("Area of the triangle = %.2lf\n", area); // .2 in lf limits the decimal point to two places

  return 0;
}