#include <stdio.h>
#include<string.h>
struct student{
    char name[50];
    int roll;
    int marks;
}s[100];
void main(){
    int i,n;
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
    }
    printf("Students geeting Marks more than 60:-\n\n");
    for(i=0;i<n;i++){
        if(s[i].marks>=60){
            printf("Roll No:%d\n",s[i].roll);
            printf("Name:");
            puts(s[i].name);
            printf("Marks:%d\n\n",s[i].marks);
        }
    }
}