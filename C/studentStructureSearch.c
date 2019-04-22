#include <stdio.h>
#include<string.h>
struct student{
    char name[50];
    int roll;
    int marks;
}s[100];
void main(){
    int i,n;
    char t[50];
    printf("Enter number of students:");
    scanf("%d",&n);
    printf("Enter information of students:-\n\n");
    for(i=0; i<n; ++i){
        printf("Enter roll number:");
        scanf("%d",&s[i].roll);
        printf("Enter name:");
        scanf("%s",s[i].name);
        fflush(stdin);  
        printf("Enter marks:");
        scanf("%d",&s[i].marks);
        printf("\n");
        fflush(stdin);
    }
    printf("Enter name of student to be searched:");
    gets(t);
    for(i=0;i<n;i++){
        if(strcmp(s[i].name,t)==0){
            printf("Name:");
            puts(s[i].name);
            printf("Roll No:%d\nMarks:%d\n",s[i].roll,s[i].marks);
        }
    }
}