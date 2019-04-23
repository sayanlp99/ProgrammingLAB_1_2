#include <stdio.h> 
void isPalindrome(char* string) { 
    char *ptr, *rev; 
    ptr = string; 
    while (*ptr != '\0') { 
        ++ptr; 
    } 
    --ptr; 
    for (rev = string; ptr >= rev;) { 
        if (*ptr == *rev) { 
            --ptr; 
            rev++; 
        } 
        else
            break; 
    }
    if (rev > ptr) 
        printf("String is Palindrome"); 
    else
        printf("String is not a Palindrome"); 
}  
void main() 
{ 
    char str[1000];
    printf("Enter String:");
    scanf("%s",str);
    isPalindrome(str);  
}