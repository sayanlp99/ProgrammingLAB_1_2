#include <stdio.h>
void main(){
    int t1=0,t2=1,t3=0,num;
    printf("Enter a positive number: ");
    scanf("%d", &num);
    printf("Fibonacci Series: %d, %d, ", t1, t2);
    t3 = t1 + t2;
    while(t3 <= num){
        printf("%d, ",t3);
        t1 = t2;
        t2 = t3;
        t3 = t1 + t2;
    }
    printf("\n");
}