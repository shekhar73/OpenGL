#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main()
{
	//variable declaration
	char BA_chArray[MAX_STRING_LENGTH]; //

	//code
	printf("\n\n");
	printf("Enter a string : \n\n");
	gets_s(BA_chArray, MAX_STRING_LENGTH);

	printf("\n\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", BA_chArray);

	return 0;
}