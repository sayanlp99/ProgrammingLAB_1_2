#include<stdio.h>
void main(){
    int a[10][10],s,i,j,r,c;
    printf("Enter number of Rows for the Matrix:");
    scanf("%d",&r);
    printf("Enter number of Columns for the Matrix:");
    scanf("%d",&c);
    printf("Enter the Matrix Elements:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("[%d][%d]:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("The Matrix is:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    s=0;
    if(r==c){
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if(i==j)
                    s=s+a[i][j];
            }
        }
        printf("Sum of diagonal elements = %d\n",s);
    }
    else
        printf("No diagonal elements\n");
}