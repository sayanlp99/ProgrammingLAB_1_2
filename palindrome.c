#include<stdio.h>
void main(){
    int number,temp,r,s=0;
    printf("Enter number:");
    scanf("%d",&number);
    temp=number;
    while(number>0){
        r=number%10;
        number=number/10;
        s=(s*10)+r;
    }
    if(temp==s)
        printf("%d is a Palindrome number.\n",temp);
    else
        printf("%d is not a Palindrome number.\n",temp);
}