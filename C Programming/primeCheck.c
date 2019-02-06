#include<stdio.h>
void main(){
	int i=2,number;
	printf("Enter the number:");
	scanf("%d",&number);
	while(i<number-1){
		if(number%i==0){
			printf("%d is not Prime number.\n",number);
			break;
		}
		i++;
	}
	if(i==number)
		printf("%d is Prime number.\n",number);
}