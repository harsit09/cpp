#include<stdio.h>
#include<conio.h>
void main(){
	char st1[20],st2[20],st3[40];
	int i=0,j=0;
	clrscr();
	printf("Enter first string\n");
	gets(st1);
	printf("Enter second string\n");
	gets(st2);
	while(st1[i]!='\0'){
	st3[j]=st1[i];
	i++;
	j++;
	}
	i=0;
	while(st2[i]!=0){
	st3[j]=st2[i];
	i++;
	j++;
	}
	st3[j]='\0';
	printf("\nThe concanated string is\n");
	puts(st3);
	printf("\nThe length of the concanated string is %d",j);
	getch();
	}