#include<stdio.h>
void main(){
    int a[100][100],b[100][100],m,n,i,j;
    printf("Enter number of rows:");
    scanf("%d",&m);
    printf("Enter the number of columns:");
    scanf("%d",&n);
    printf("Enter elements for 1st Matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements for 2nd Matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("Added Matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            printf("%d ",a[i][j]+b[i][j]);
        printf("\n");
    }
}