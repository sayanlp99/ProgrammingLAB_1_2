#include<stdio.h>
void swap(int *,int *);
void main()
{
    int a,b;
    printf("Enter the numbers\n");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("the swapped values are %d %d",a,b);
}
void swap(int *x,int *y)
{
    int c=0;
    c=*x;
    *x=*y;
    *y=c;
    printf("The swapped values are %d %d\n",*x, *y);
}
printf("sayan asshole!!!");