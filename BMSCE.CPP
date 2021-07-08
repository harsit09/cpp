#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
	char a[10];
	FILE *fp;
	printf("Enter data: ");
	fp=fopen("BMSCE.txt","w");
	fgets(a,7,stdin);
	fclose(fp);
	printf("\nOutput\n");
	fp=fopen("BMSCE.txt","r");
	if(fp== NULL){
	printf("Error");
	exit(1);
	}
	fgets(a,6,fp);
	puts(a);
	fclose(fp);
	getch();
	}
	