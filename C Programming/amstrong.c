#include<stdio.h>
void main(){
    int number,r,s=0,temp;
    printf("Enter number:");
    scanf("%d",&number);
    temp=number;
    while(number>0){
        r=number%10;
        s=s+(r*r*r);
        number=number/10;
    }
    if(temp==s)
        printf("%d is an Amstrong number.\n",temp);
    else
        printf("%d is not an Amstrong number.\n",temp);    
}