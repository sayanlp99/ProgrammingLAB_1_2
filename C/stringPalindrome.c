#include<string.h>
#include<stdio.h>
void main(){
	char a[50],b[50];
	int i,l,c;
	printf("Enter String:");
	gets(a);
	strcpy(a,b);
	strrev(b);
	l=strlen(a);
	for(i=0;i<l;i++){
		if(a[i]==b[i])
			c++;
	}
	if(l==c)
		printf("String is palindrome.\n");
	else
		printf("String is not palindrome.\n");	
}
