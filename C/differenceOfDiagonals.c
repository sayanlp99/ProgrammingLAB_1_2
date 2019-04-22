#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[100][100],n,i,j,d1=0,d2=0,res;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for (int i = 0; i < n; i++) 
    { 
        d1 += a[i][i]; 
        d2 += a[i][n-i-1]; 
    }
    res=abs(d1-d2);
    printf("%d",res);
}