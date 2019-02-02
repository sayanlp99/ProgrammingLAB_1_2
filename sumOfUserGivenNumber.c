#include<stdio.h>
void main(){
	int number,n,r,sum=0;
	printf("Enter Number");
	scanf("%d",&number);
	n=number;
	while(number>0){
		r=number%10;
		number=number/10;
		sum=sum+r;
	}
	printf("Sum of the use given number %d: %d\n",n,sum);
}
