#include <stdio.h>
#include <stdlib.h>
void main(){
    int n;
    char *text;
    printf("Enter limit of the text: ");
    scanf("%d",&n);
    text=(char*)malloc(n*sizeof(char));
    printf("Enter text: ");
    scanf(" ");                             //clear buffer
    gets(text);
    fflush(stdin);
    printf("Inputted text is: %s\n",text);
    free(text);
}