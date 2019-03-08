#include<stdio.h>
#include<math.h>
#define f(x) ((x*x*x)-9*x+1)
void main(){
	int i,x;
	float x0,x1,x2,e=0.0001;
	printf("Enter values of x0 and x1:");
	scanf("%f %f",&x0,&x1);
	if(f(x0)*f(x1)>0)
		printf("Roots does not lie on this point.\n");
	else{
		do{
			x2=(x0+x1)/2.0;
			if(f(x0)*f(x2)>0)
				x0=x2;
			else
				x1=x2;
		}while(fabs(x0-x1)>e);
		printf("The value of root is:%f\n",x2);
	}
}