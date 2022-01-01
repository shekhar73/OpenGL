#include<stdio.h>
#include<string.h>

#define MAX_STRING_LENGTH 512

int main()
{
	char BA_str[MAX_STRING_LENGTH];

	printf("Enter String :");
	gets_s(BA_str, MAX_STRING_LENGTH);

	printf("\n\n");
	printf("After reversing string is =%s", strrev(BA_str));

	return 0;
}