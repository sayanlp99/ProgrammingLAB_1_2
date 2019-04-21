#include<stdio.h>
void disp(int *,int);
void main(){
    int n,a[50];
    printf("Enter range of the array:");
    scanf("%d",&n);
    printf("Enter array Elements:\n");
    for(int i=0;i<n;i++){
        printf("[%d]:",i+1);
        scanf("%d",&a[i]);
    }
    disp(a,n);
}
void disp(int *p,int n){
    printf("The Array Elements:\n");
    for(int j=0;j<n;j++)
        printf("%d ",*(p+j));
    printf("\n");    
}