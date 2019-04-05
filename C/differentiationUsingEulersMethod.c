#include<stdio.h>
#define f(x,y) ((x*X)+y)
void main(){
	float x0,y0,h,n,X,y1,x1;
	int i;
	printf("Enter the values of:-\n");
	printf("x0:");
	scanf("%f",&x0);
	printf("y0:");
	scanf("%f",&y0);
	printf("X:");
	scanf("%f",&X);
	printf("h:");
	scanf("%f",&h);
	n=(X-x0)/h;
	for(i=0;i<n;i++){
		y1=y0+(h*f(x0,y0));
		x1=x0+h;
		y0=y1;
		x0=x1;
	}
	printf("x0=%f\ty0=%f\n",x1,y1);
}		
	
