#include <stdio.h>
#include <string.h>
void main(){
    char a[100], b[100];
    printf("Enter a string to check if it is a palindrome:");
    gets(a);
    strcpy(b, a);
    strrev(b);
    if (strcmp(a, b) == 0)
    printf("The string is a palindrome.\n");
    else
    printf("The string isn't a palindrome.\n");
}