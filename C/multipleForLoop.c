#include <stdio.h>
void main(){
   int x, y,i;
   int product = 0; 
   printf("Enter two integers:");
   scanf("%d %d", &x, &y);
   for(i=y;i>0;i--)
      product += x;
   printf("Product:%d\n", product);
}