#include<stdio.h>
void gcd(int,int);
void main(){
	int a,b;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	gcd(a,b);
}
void gcd(int x,int y){
	if(x==y)
		printf("GCD:%d\n",x);
	else if(x>y)
		gcd(x-y,y);
	else
		gcd(x,y-x);
}