#include<stdio.h>
#include<string.h>
void main(){
	char s[50];
	int i,c=0,l;
	printf("Enter String:");
	gets(s);
	l=strlen(s);
	for(i=0;i<l;i++){
		if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U')
			c++;
	}
	printf("Vowels in the String:%d\n",c);
}
