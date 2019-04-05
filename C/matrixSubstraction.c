#include<stdio.h>
void main(){
	int i,j,r1,r2,c1,c2,m1[50][50],m2[50][50],m3[50][50];
	printf("Enter number of rows for 1st Matrix:");
	scanf("%d",&r1);
	printf("Enter number of columns for 1st Matrix:");
	scanf("%d",&c1);
	printf("Enter number of rows for 2nd Matrix:");
	scanf("%d",&r2);
	printf("Enter number of columns for 2nd Matrix:");
	scanf("%d",&c2);
	if(r1!=r2 || c1!=c2)
		printf("Substraction not possible for this set of Matrices.\n");
	else{
		printf("Enter elements of First Matrix:\n");
		for(i=0;i<r1;i++){
			for(j=0;j<c1;j++){
				printf("[%d][%d]:",i+1,j+1);
				scanf("%d",&m1[i][j]);
			}
		}
		printf("Enter elements of Second Matrix:\n");
		for(i=0;i<r2;i++){
			for(j=0;j<c2;j++){
				printf("[%d][%d]:",i+1,j+1);
				scanf("%d",&m2[i][j]);
			}
		}
		printf("First Matrix:\n");
		for(i=0;i<r1;i++){
			for(j=0;j<c1;j++)
				printf("%d ",m1[i][j]);
			printf("\n");
		}
		printf("Second Matrix:\n");
		for(i=0;i<r2;i++){
			for(j=0;j<c2;j++)
				printf("%d ",m2[i][j]);
			printf("\n");
		}
		for(i=0;i<r1;i++){
			for(j=0;j<c1;j++)
				m3[i][j]=m1[i][j]-m2[i][j];
		}
		printf("Matrix after Substraction:\n");
		for(i=0;i<r1;i++){
			for(j=0;j<c1;j++)
				printf("%d ",m3[i][j]);
			printf("\n");
		}
	}
}
