#include<stdio.h>
void main(){
    int i,num,a=0,b=1,c;
    printf("Enter number:");
    scanf("%d",&num);
    printf("Fibonacci Series:");
    for(i=0;i<=num;i++){
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
}