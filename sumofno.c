//sum of digit#include<stdio.h>
#include <stdio.h>
void main(){
    int n,s=0,i;
    printf("enter\n");
    scanf("%d",&n);
    while(n>0)
    {
        i=n%10;
        s=s+i;
        n=n/10;
    }
    printf("sum=%d",s);
    
}