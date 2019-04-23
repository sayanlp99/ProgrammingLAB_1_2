#include<stdio.h>
void main(int a, char *v[]){
	FILE *p,*q;
	char c;
	p=fopen(v[1],"r");
	q=fopen(v[2],"w");
	while((c=getc(p))!=EOF)
		putc(c,q);
}