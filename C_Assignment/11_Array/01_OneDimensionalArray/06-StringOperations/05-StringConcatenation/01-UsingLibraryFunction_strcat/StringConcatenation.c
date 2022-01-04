#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main()
{
	//variable declaration

	char BA_Array1[MAX_STRING_LENGTH], BA_Array2[MAX_STRING_LENGTH];

	printf("\n\n");
	printf("Enter First String string\n");
	gets_s(BA_Array1, MAX_STRING_LENGTH);

	printf("Enter Second string\n");
	gets_s(BA_Array2, MAX_STRING_LENGTH);

	//string cocatenation

	strcat(BA_Array1, BA_Array2);

	printf("After concatenation our string is : %s", BA_Array1);

	return 0;


}