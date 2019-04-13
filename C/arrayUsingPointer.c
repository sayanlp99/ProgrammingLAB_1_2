#include <stdio.h>
void main(){
    int data[50],i,n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++){
        printf("[%d]:",i+1);
        scanf("%d", data + i);
    }
    printf("You entered:\n");
    for(i = 0; i < n; i++)
        printf("%d ", *(data + i));
}