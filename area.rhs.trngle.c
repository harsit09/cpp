#include<stdio.h>
#include<math.h>
int
main ()
{
  int area, b, h;
  printf (" \n enter the side of triangle :");
  scanf ("%d" "%d", &b, &h);
  {
    if (b != 0 && h != 0)
      {
	int a = b * h;
	area = (0.5 * a);
	printf ("area is %d:", area);
      }
    else
      printf (" \n area is not defined! ");
    return 0;
  }
}
