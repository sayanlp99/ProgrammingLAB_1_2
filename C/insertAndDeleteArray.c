#include<stdio.h>
void main(){
    int arr[50],i,size,num,pos,n,p;
    printf("Enter the number of elements to be added:");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("Enter Element:");
        scanf("%d",&arr[i]);
    }
    printf("Enter element to insert : ");
    scanf("%d", &num);
    printf("Enter the element position : ");
    scanf("%d", &pos);
    if(pos > size+1 || pos <= 0){
        printf("Invalid position! Please enter position between 1 to %d", size);
    }
    else{
        for(i=size; i>=pos; i--){
            arr[i] = arr[i-1];
        }
        arr[pos-1] = num;
        size++;
        printf("Array elements after insertion :");
        for(i=0; i<size; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    printf("Enter the location where you wish to delete element:");
    scanf("%d", &p);
    if (p >= size+1)
      printf("Deletion not possible.\n");
    else{
        for (i = p - 1; i < size - 1; i++)
            arr[i] = arr[i+1];
            
        printf("Resultant array:");
        for (i = 0; i < size - 1; i++)
            printf("%d ", arr[i]);
   }
}