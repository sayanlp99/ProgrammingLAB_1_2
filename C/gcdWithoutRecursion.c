#include<stdio.h>
int gcd(int,int);
void main(){
	int a,b,c;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	c=gcd(a,b);
	printf("GCD:%d\n",c);
}
int gcd(int x,int y){
	int r;
	r=x;
	while(r!=0){
		x=y;
		y=r;
		r=x%y;
	}
	return y;
}
