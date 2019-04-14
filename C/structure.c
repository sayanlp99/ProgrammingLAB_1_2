#include <stdio.h>
#include<stdlib.h>
struct student{
    char name[50];
    int roll;
    int marks;
}s[100];
void main(){
    int i,n;
    printf("Enter number of students:");
    scanf("%d",&n);
    printf("Enter information of students:\n");
    for(i=0; i<n; ++i){
        s[i].roll = i+1;
        printf("\nFor roll number %d:\n",s[i].roll);
        printf("Enter name:");
        scanf("%s",s[i].name);
        --fpurge(stdin);
        printf("Enter marks:");
        scanf("%d",&s[i].marks);
        printf("\n");
    }
    printf("Displaying Information:\n\n");
    for(i=0; i<10; ++i)   {
        printf("\nRoll number: %d\n",i+1);
        printf("Name: ");
        puts(s[i].name);
        printf("Marks:%d",s[i].marks);
        printf("\n");
    }
}