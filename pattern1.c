/* Print the triangle upto user given number of rows
*
* *
* * *
* * * *
*/
#include<stdio.h>
void main(){
    int i,j,rows;
    printf("Enter the number of Rows of the triangle:");
    scanf("%d",&rows);
    for(i=0;i<rows;i++){
        for(j=0;j<=i;j++)
            printf("* ");
        printf("\n");
    }
}