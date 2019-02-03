#include<stdio.h>
void main(){
	int number;
	printf("Enter a number:");
	scanf("%d", &number);
	if(number%7==0 && number%10==0)
		printf("%d is divisible by 7 and 10.\n",number);
	else	
		printf("%d is not divisible by 7 and 10\n.",number);
}
