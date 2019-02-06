#include<stdio.h>
void main(){
    int i,j,n=3,t=1;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			if(t%2==0)
				printf("0");
			else
				printf("1");
		}
		t++;
		printf("\n");
	}
}