#include<stdio.h>
#include<math.h>
float fact(float);
void main(){
    float n,i,s=0,m=1;
    printf("Enter the value of n:");
    scanf("%f",&n);
    for(i=1;i<=n;i++){
        s=(m*(pow(i,i)/fact(i)))+s;
        m=m*(-1);
    }
    printf("Value of the Series:%f\n",s);
}
float fact(float a){
    float f=1;
    for(float x=1;x<=a;x++){
        f=f*x;
    }
    return f;
}