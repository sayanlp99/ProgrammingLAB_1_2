#include<stdio.h>
void main(){
	int i,j,a[50][50],r,c=0;
	printf("Enter number of Rows of the Matrix:");
	scanf("%d",&r);
	printf("Enter the Matrix:\n");
	for(i=0;i<r;i++){
		for(j=0;j<r;j++){
			printf("[%d][%d]:",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("The Actual Matrix:\n");
	for(i=0;i<r;i++){
		for(j=0;j<r;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++){
		for(j=0;j<r;j++){
			if(a[i][j]==0)
				c++;
		}
	}
	if(c>=(1.0/2.0)*r*r)
		printf("Sparse Matrix\n");
	else
		printf("Not a Sparse Matrix.\n");
}