#include<stdio.h>
void main(){
	int a[20],i,j,n,t;
	printf("Enter the range:");
	scanf("%d",&n);
	printf("Enter the elements of the array:\n");
	for(i=0;i<n;i++){
		printf("[%d]:",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		t=a[i];
		j=i-1;
		while(j>=0 && a[i]>t){
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=t;
	}
	printf("Sorted Array:\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}