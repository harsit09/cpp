#include <stdio.h>
#include <conio.h>
int main()
{
int no1,no2;
int *ptr1,*ptr2;
 int sum,sub,mult;
 float div,rem;

 printf("Enter number1:\n");
 scanf("%d",&no1);
 printf("Enter number2:\n");
 scanf("%d",&no2);
 
 ptr1=&no1;//ptr1 stores address of no1
 ptr2=&no2;//ptr2 stores address of no2

 sum=(*ptr1) + (*ptr2);
 sub=(*ptr1) - (*ptr2);
 mult=(*ptr1) * (*ptr2);
 div=(*ptr1) / (*ptr2);
 rem=(*ptr1) % (*ptr2);
 printf("sum= %d\n",sum);
 printf("subtraction= %d\n",sub);
 printf("Multiplication= %d\n",mult);
 printf("Division= %f\n",div);

 printf("reminder= %f\n",rem);
 getch();
 return 0;
}