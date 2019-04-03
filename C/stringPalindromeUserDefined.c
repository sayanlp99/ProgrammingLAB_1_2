#include <stdio.h>
void main(){
	char text[100];
	int begin, middle, end, length = 0;
	printf("Enter text:");
	gets(text);
	while (text[length] != '\0')
	length++;
	end = length - 1;
	middle = length/2;
	for (begin = 0; begin < middle; begin++){
		if (text[begin] != text[end]){
			printf("String not Palindrome.\n");
			break;
		}
		end--;
	}
	if (begin == middle)
		printf("String is Palindrome.\n");
}