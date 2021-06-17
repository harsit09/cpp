#include<stdio.h>
#include<conio.h>
void main(){
	int a[5][5],n,m,i,j;
	clrscr();
	printf("\nEnter number of rows & columns ");
	scanf("%d%d",&m,&n);
	printf("\n\nEnter the elements in row-wise order \n");
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	scanf("%d",&a[i][j]);
	printf("\nThe entered matrix  is ");
	for(i=0;i<m;i++){
	printf("\n");
	for(j=0;j<n;j++)
	printf("%d\t",a[i][j]);
	}
	printf("\n transpose of martix is\n");
	for(i=0;i<n;i++){
	printf("\n");
	for(j=0;j<m;j++){
	printf("%d\t",a[j][i]);
	}
	}
	getch();
	}