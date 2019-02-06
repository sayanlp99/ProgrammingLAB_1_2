#include<stdio.h>
void main(){
	int num;
	printf("Enter number:");
	scanf("%d",&num);
	if(num==0)
		printf("%d is Zero.\n",num);
	else if(num>0)
		printf("%d is Positive.\n",num);
	else
		printf("%d is Negetive.\n",num);
}