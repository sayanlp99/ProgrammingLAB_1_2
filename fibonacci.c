#include<stdio.h>
void main(){
    int f1=0,f2=1,f3,i=3,num;
    printf("Enter length of the  fibonacci series:");
    scanf("%d",&num);
    printf("%d %d",f1,f2); 
    while(i<=num){
        f3=f1+f2;
        printf(" %d",f3);
        f1=f2;
        f2=f3;
        i++;
    }
}