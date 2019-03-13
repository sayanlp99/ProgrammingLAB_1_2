#include<stdio.h>
void main(){
    int num,r,s=0;
    printf("Enter the number:");
    scanf("%d",&num);
    while(num<0){
        r=num%10;
        s=(s*10)+r;
        num=num/10;
    }
    printf("Reversed Number:%d",s);
}