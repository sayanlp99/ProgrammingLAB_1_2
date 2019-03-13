
#include <stdio.h>
int power(int n1, int n2);
void main(){
    int base, powerRaised, result;
    printf("Enter base number:");
    scanf("%d",&base);
    printf("Enter power number(positive integer):");
    scanf("%d",&powerRaised);
    result = power(base, powerRaised);
    printf("%d^%d = %d", base, powerRaised, result);
}
int power(int base, int powerRaised){
    if (powerRaised != 0)
        return (base*power(base, powerRaised-1));
    else
        return 1;
}