#include<stdio.h>
void main(){
	int m1[50][50],m2[50][50],m3[50][50],i,j,r1,c1,r2,c2,k;
	printf("Enter number of rows of First Matrix:");
	scanf("%d",&r1);
	printf("Enter number of columns of First Matrix:");
	scanf("%d",&c1);
	printf("Enter number of rows of Second Matrix:");
	scanf("%d",&r2);
	printf("Enter number of columns of Second Matrix:");
	scanf("%d",&c2);
	if(r1!=c2 && r2!=c1)
		printf("Multiplication is not possible.\n");
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
			for(j=0;j<c2;j++)
				m3[i][j]=0;
		}
		for(i=0;i<r1;i++){
			for(j=0;j<c2;j++){
				for(k=0;k<c1;k++)
					m3[i][j]+=m1[i][k]*m2[k][j];
			}
		}
		printf("Multiplied Matrix:\n");
		for(i=0;i<r1;i++){
			for(j=0;j<c2;j++){
				printf("%d ",m3[i][j]);
				if(j==c2-1)
					printf("\n");
			}
		}
	}
}
