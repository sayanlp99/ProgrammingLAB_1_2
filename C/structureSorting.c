#include<stdio.h>
#include<string.h>
struct student{
	char name[50];
	int roll;
	int marks;
}s[100],t;
void main(){
	int i,n,j;
	printf("Enter the number of students:");
	scanf("%d",&n);
	printf("Enter Student Information:-\n");
	for(i=0;i<n;i++){
		printf("Enter  Roll No:");
		scanf("%d",&s[i].roll);
		printf("Enter name:");
		scanf("%s",s[i].name);
		fflush(stdin);
		printf("Enter Marks:");
		scanf("%d",&s[i].marks);
		printf("\n");
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(s[i].marks<s[j].marks){
				t=s[i];
				s[i]=s[j];
				s[j]=t;
			}
		}
	}
	printf("List of students according to decending order of their marks:\n");
	for(i=0;i<n;i++){
		printf("\nMarks:%d\nRoll No:%d\nName:",s[i].marks,s[i].roll);
		puts(s[i].name);
	}
}