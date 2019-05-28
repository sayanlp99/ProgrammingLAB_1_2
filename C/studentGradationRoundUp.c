#include<stdio.h>
int main(){
    int n,i,a[60],r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for (i = 0; i < n; i++){
        if(a[i]>=37 && a[i]%5!=0 && a[i]%5>=3){
            r=5-a[i]%5;
            a[i]=a[i]+r;
        }
    }
    for (i = 0; i < n; i++)
        printf("%d\n",a[i]);
      return 0;
}
