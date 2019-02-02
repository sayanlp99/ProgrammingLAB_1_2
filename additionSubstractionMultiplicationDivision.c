#include<stdio.h>
void main(){
	int num1,num2,add,sub;
	float multi,div;
	printf("Enter one number:");
	scanf("%d",&num1);
	printf("Enter another number:");
	scanf("%d",&num2);
	add=num1+num2;
	sub=num1-num2;
	multi=num1*num2;
	div=num1/num2;
	printf("Addition:%d\nSubstraction:%d\nMultiplication:%f\nDivision:%f\n",add,sub,multi,div);
	
}
