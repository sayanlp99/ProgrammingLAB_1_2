#include<stdio.h>
void main(){
	int a[50],i,e,max,min;
	printf("Enter number of elements of the array:");
	scanf("%d",&e);
	printf("Enter elements of the array:\n");
	for(i=0;i<e;i++){
		printf("[%d]:",i+1);
		scanf("%d",&a[i]);
	}
	max = a[0];
    min = a[0];
	for(i=1;i<e;i++){
		if(a[i]>max)
			max=a[i];
	}
	for(i=1;i<e;i++){
		if(a[i]<min)
			min=a[i];
	}
	printf("Maximum value of the element in the array:%d\n",max);
	printf("Minimum value of the element in the array:%d\n",min);
}