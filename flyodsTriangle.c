#include<stdio.h>
void main(){
    int rows,i,j,c=1;
    printf("Enter number of rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++)
            printf("%d ",c++);
        printf("\n");
    }
}