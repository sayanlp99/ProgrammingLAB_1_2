#include<stdio.h>
void upper_string(char[]);
void main(){
	char string[100];
	printf("Enter String in LowerCase:");
	gets(string);
	upper_string(string);
	printf("The String in UpperCase:%s\n",string);
}
void upper_string(char s[]){
	int c=0;
	while(s[c]!='\0'){
		if(s[c]>='a' && s[c]<='z')
			s[c]=s[c]-32;
		c++;
	}
}
