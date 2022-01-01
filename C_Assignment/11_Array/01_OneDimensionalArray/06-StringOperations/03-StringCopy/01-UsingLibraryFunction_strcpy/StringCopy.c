#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main()
{
	//variable declaration
	char BA_chArray_Orignal[MAX_STRING_LENGTH];
	char BA_chArray_Copy[MAX_STRING_LENGTH];

	//code
	printf("\n");
	printf("Enter a string\n\n");
	gets_s(BA_chArray_Orignal, MAX_STRING_LENGTH);

	strcpy(BA_chArray_Copy, BA_chArray_Orignal);

	printf("Orignal String is %s", BA_chArray_Orignal);
	printf("\n");
	printf("Copied string is %s", BA_chArray_Copy);

	return 0;
}