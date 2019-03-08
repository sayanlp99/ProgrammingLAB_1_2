#include<stdio.h>
void swap(int *p,int *q){
	int t=*p;
	*p=*q;
	*q=t;
}
void main(){
	int a,b;
	printf("Enter value of 'a':");
	scanf("%d",&a);
	printf("Enter value of 'b':");
	scanf("%d",&b);
	printf("Value of 'a' and 'b' before swapping is %d and %d.\n",a,b);
	swap(&a,&b);
	printf("Value of 'a' and 'b' after swapping is %d and %d.\n",a,b);
}
