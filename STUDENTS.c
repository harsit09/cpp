#include<stdio.h>
#include<conio.h>
void main(){
	int a[4][3],i,j,max,z;
	clrscr();
	printf("Enter the marks in the order : Subject1, subject2 , subject3\n");
	for(i=0;i<4;i++){
	printf("\nEnter the marks of student%d: ",i+1);
	for(j=0;j<3;j++)
	scanf("%d",&a[i][j]);}
	printf("\n\n");
	printf("           Subject1 Subject2 subject3\n");
	for(i=0;i<4;i++){
	printf("\nStudent%d   ",i+1);
	for(j=0;j<3;j++)
	printf("%d\t",a[i][j]);
	}
	printf("\n\n");
	for(j=0;j<3;j++){
	max=0;
	for(i=0;i<4;i++){
	if(max<a[i][j]){
	max=a[i][j];
	z=i+1;
	}
	}
	printf("\nThe max marks of Subject%d is by student%d and is %d\n",j+1,z,max);
	}
	getch();
	}
