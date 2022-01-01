#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main()
{
	//variable declaration
	char BA_chArray[MAX_STRING_LENGTH];
	int BA_iStringLength = 0;

	//code
	printf("\n\n");
	printf("Enter a string:\n");
	gets_s(BA_chArray, MAX_STRING_LENGTH);

	//***Output***
	printf("\n\n");
	printf("String ENtered by you is : \n\n");
	printf("%s\n", BA_chArray);

	printf("\n\n");
	BA_iStringLength = strlen(BA_chArray);
	printf("Length of string is %d characters !!!\n\n", BA_iStringLength);

	return 0;

}