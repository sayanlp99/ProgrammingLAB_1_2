#include<stdio.h>
void main(){
    int i,j,n,c,s=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(j=1;j<n;j++){
        c=0;
        for(i=1;i<=j;i++){
            if(j%i==0)
                c++;
        }
        if(c==2)
            s=s+j;
    }
    printf("Summation of the Prime Numbers:%d",s);
}