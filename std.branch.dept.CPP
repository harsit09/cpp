#include<stdio.h>
#include<conio.h>
void main(){
struct student{
	int roll_no,result;
	char name[25], sec[5], dep[20], fees[5] ;
	}st1,st2;
	clrscr();
	printf("\nEnter the details of the first student\n");
	printf("Enter the roll no: ");
	scanf("%d",&st1.roll_no);
	printf("\nEnter the name: ");
	scanf("%s",&st1.name);
	printf("\nEnter the section: ");
	scanf("%s",&st1.sec);
	printf("\nEnter the department: ");
	scanf("%s",&st1.dep);
	printf("\n enter the fees :");
	scanf("%s",&st1.fees);
	printf("\nEnter the total marks: ");
	scanf("%d",&st1.result);
	printf("\n---------------------------------------------------------");
	printf("\nEnter the details of the second student\n");
	printf("Enter the roll no: ");
	scanf("%d",&st2.roll_no);
	printf("\nEnter the name: ");
	scanf("%s",&st2.name);
	printf("\nEnter the section: ");
	scanf("%s",&st2.sec);
	printf("\nEnter the department: ");
	scanf("%s",&st2.dep);
	printf("enter the fees : ");
	scanf("%s",&st2.fees);
	printf("\nEnter the total marks: ");
	scanf("%d",&st2.result);
	printf("\n---------------------------------------------------------");
	if(st1.result>st2.result){
	printf("\nThe student with highest marks is %s",st1.name);
	printf("\nRoll no.=%d\nSection=%s\nDepartment=%s\nTotal marks=%d",st1.roll_no,st1.sec,st1.dep,st1.result);
	}
	else{
	printf("\nThe student with highest marks is %s",st2.name);
	printf("\nRoll no.=%d\nSection=%s\nDepartment=%s\nTotal marks=%d",st2.roll_no,st2.sec,st2.dep,st2.result);
	}
	getch();
	}
