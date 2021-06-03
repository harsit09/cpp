#include<stdio.h>
void main()
{
    int n;
    printf("enter\n");
    scanf("%d",&n);
    if(n!=0){
        for(int i=n;i<=100;i++){
            if(i%n==0)
            printf("%d  ",i);
        }
    }
    else
        printf("0");
}