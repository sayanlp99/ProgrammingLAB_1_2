#include<stdio.h>
int factorial(int);
void main(){
	int num,fact;
	printf("Enter number:");
	scanf("%d",&num);
	fact=factorial(num);
	printf("Factorial:%d\n",fact);
}
int factorial(int y){
	if(y==0)
		return 1;
	else
		return (y*factorial(y-1));
}
