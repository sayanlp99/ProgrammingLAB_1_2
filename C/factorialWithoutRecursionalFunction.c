#include<stdio.h>
void factorial();
void main(){
	factorial();
}
void factorial(){
	int i,num,fact=1;
	printf("Enter number:");
	scanf("%d",&num);
	if(num==0)
		printf("Factorial:%d\n",fact);
	else if(num>0){
		for(i=1;i<=num;i++)
			fact=fact*i;
		printf("Factorial:%d\n",fact);
	}
	else
		printf("Negetive integers cannot have Factorial Value.\n");
}
