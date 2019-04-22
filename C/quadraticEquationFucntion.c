#include<stdio.h> 
#include<math.h> 
#include<stdlib.h> 
void quad(float x, float y, float z){
    float f,r1,r2;
    f=y*y-4*x*z;
    if(f==0){
        printf("Roots are Equal.\n");
        r1=-y/(2*x);
        printf("Roots are:%f %f",r1,r1);
    }
    else if(f>0){
        printf("Roots are real.\n");
        r1=(-y+sqrt(f))/(2*x);
        r2=(-y-sqrt(f))/(2*x);
        printf("Roots are:%f %f",r1,r2);
    }
    else{
        printf("Roots are imaginary.\n");
        r1=-y/(2*x);
        r2=sqrt(-f)/(2*x);
        printf("Roots are:%f %f",r1,r2);
    } 
} 
void main(){ 
    float a,b,c;
    printf("Enter values of a,b,c:");
    scanf("%f %f %f",&a,&b,&c); 
    quad(a, b, c);  
}