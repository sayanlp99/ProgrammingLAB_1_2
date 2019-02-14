#include<stdio.h>
void main(){
    int a[50],i,n,s;
    printf("Enter the number of elements to be added:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter Element:");
        scanf("%d",&a[i]);
    }
    printf("Enter the value to be searched:");
    scanf("%d",&s);
    for(i=0;i<=n;i++){
        if(a[i]==s){
            printf("%d is present in index %d.\n",s,i+1);
            break;
        }
    }
    if(i==n)
        printf("No results found.\n");
}