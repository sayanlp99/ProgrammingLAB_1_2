#include<stdio.h>
void main(){
    int a[100][100],i,j,m,n;
    printf("Enter number of rows:");
    scanf("%d",&m);
    printf("Enter number of columns:");
    scanf("%d",&n);
    printf("Enter elements for Matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Actual Matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    printf("Transposed Matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            printf("%d ",a[j][i]);
        printf("\n");
    }

}