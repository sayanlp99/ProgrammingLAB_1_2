#include<stdio.h>
#include<math.h>
int fact(float);
void main(){
    float n,i;
    float s=0;
    printf("Enter the value of n:");
    scanf("%f",&n);
    for(i=1;i<=n;i++){
        s=(pow(i,i)/fact(i))+s;
    }
    printf("Value of the Series upto %f:%f\n",n,s);
}
int fact(float a){
    float f;
    for(float x=1;x<=a;x++){
        f=f*x;
    }
    return f;
}