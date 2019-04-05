#include<stdio.h>
#include<string.h>
void main(){
  char s[50];
  int i,upper=0,lower=0,special=0,number=0;
  printf("Enter EmailID:");
  gets(s);
  for(i=0;i<strlen(s);i++){
    if (s[i] >= 'A' && s[i] <= 'Z') 
      upper++; 
    else if (s[i] >= 'a' && s[i] <= 'z') 
      lower++; 
    else if (s[i]>= '0' && s[i]<= '9') 
      number++; 
    else
      special++;
  }
  printf("UpperCase:%d\nLowercase:%d\nNumber:%d\nSpecial Character:%d\n",upper,lower,number,special);
}