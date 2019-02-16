#include<stdio.h>
void fibonacci();
void main(){
	fibonacci();
}
void fibonacci(){
	int h,a=0,b=1,c=0;
	printf("Enter number of terms:");
	scanf("%d",&h);
	printf("The Fibonacci series is:%d %d ",a,b);
	while(c<=h){
		c=a+b;
		if(c<=h){
			printf("%d ",c);
			a=b;
			b=c;
		}
	}
	printf("\n");
}