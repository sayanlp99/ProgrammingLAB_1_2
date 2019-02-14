#include<stdio.h>
void main(){
    int a[50],i,n;
    float avg,sum=0;
    printf("Enter the number of elements to be added:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter Element:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n;i++)
        sum=sum+a[i];
    avg=sum/n;
    printf("Sum of all the elements is:%f\n",sum);
    printf("Average of all the elements:%f\n",avg);
}