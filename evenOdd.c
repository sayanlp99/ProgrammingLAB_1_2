#include<stdio.h>
void main(){
	int num;
	printf("Enter number:");
	scanf("%d",&num);
	if(num%2==0)
		printf("%d is even.\n",num);
	else
		printf("%d is odd.\n",num);
}
