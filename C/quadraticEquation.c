#include<stdio.h>
#include<math.h>
void main(){
    float a,b,c,f,r1,r2;
    printf("Enter the values of a,b and c:");
    scanf("%f %f %f",&a,&b,&c);
    f=b*b-4*a*c;
    if(f==0){
        printf("Roots are Equal.\n");
        r1=-b/(2*a);
        printf("Roots are:%f %f",r1,r1);
    }
    else if(f>0){
        printf("Roots are real.\n");
        r1=(-b+sqrt(f))/(2*a);
        r2=(-b-sqrt(f))/(2*a);
        printf("Roots are:%f %f",r1,r2);
    }
    else{
        printf("Roots are imaginary.\n");
        r1=-b/(2*a);
        r2=sqrt(-f)/(2*a);
        printf("Roots are:%f %f",r1,r2);
    }
}