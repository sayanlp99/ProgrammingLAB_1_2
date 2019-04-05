#include<stdio.h>
#define f(x) ((4*x)-(3*x*x))
void main(){
	float a,b,h,s=0,x,n,sum;
	int i;
	printf("Enter the Lower Limit:");
	scanf("%f",&a);
	printf("Enter the Upper Limit:");
	scanf("%f",&b);
	printf("Enter the Number of Sub-Interval:");
	scanf("%f",&n);
	h=(b-a)/n;
	for(i=1;i<n;i++){
		x=a+(i*h);
		s=s+f(x);
	}
	sum=(h/2)*(f(a)+f(b)+2*s);
	printf("The sum is:%f\n",sum);
}
