#include<stdio.h>
void main(){
	int select;
	float fahrenheit,celcius;
	printf("Choose an option:\n1.Fahrenheit to Celcius.\n2.Celcius to Fahrenheit\n:");
	scanf("%d",&select);
	if(select==1){
		printf("Enter Temperature in Fahrenheit:");
		scanf("%f",&fahrenheit);
		celcius=(5.0/9.0)*(fahrenheit-32);
		printf("Temperature in Celcius:%f\n",celcius);
	}
	else if(select==2){
		printf("Enter Temperature in Celcius:");
		scanf("%f",&celcius);
		fahrenheit=(9.0/5.0)*celcius+32;
		printf("Temperature in Fahrenheit:%f\n",fahrenheit);
	}
	else{
		printf("Wrong option selected.\n");	
	}
}