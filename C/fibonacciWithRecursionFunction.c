#include<stdio.h>
int fibonacci(int);
void main(){
	int t,i;
	printf("Enter number of terms to be printed:");
	scanf("%d",&t);
	printf("Fibonacci Series:");
	for(i =1;i<=t;i++)
		printf("%d ",fibonacci(i));
	printf("\n");
}
int fibonacci(int x){
	if(x==1)
		return 0;
	else if(x==2)
		return 1;
	else
		return (fibonacci(x-1)+fibonacci(x-2));
}
