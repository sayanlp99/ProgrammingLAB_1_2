#include<stdio.h>
void main(){
    int i,num,fact=1;
    printf("Enter number:");
    scanf("%d",&num);
    if(num>0){
        for(i=1;i<=num;i++)
            fact=fact*i;
        printf("Factorial:%d\n",fact);
    }
    else if(!num)
        printf("Factorial:%d\n",fact);
    else
        printf("Negetive number cannot have Factorial value.\n");
}