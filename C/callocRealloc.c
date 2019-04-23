#include<stdio.h>
#include<stdlib.h>
void main(){
    int n,*p,i;
    printf("Enter range:");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",p+i);
    printf("Elements:\n");
    for(i=0;i<n;i++)
        printf("%d ",*(p+i));
    printf("\n");
    printf("Enter Range:");
    scanf("%d",&n);
    p=(int*)realloc(p,n*sizeof(int));
    for(;i<n;i++)
        scanf("%d",p+i);
    printf("Elements:\n");
    for(i=0;i<n;i++)
        printf("%d ",*(p+i));
    printf("\n");
}