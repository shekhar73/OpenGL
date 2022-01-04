#include<stdio.h>
#define MAX_STRING_LENGTH 512

int main()
{
	char BA_MyString[MAX_STRING_LENGTH];
	int i;

	printf("Enter a string:\n ");
	gets_s(BA_MyString, MAX_STRING_LENGTH);

	for (i = 0; i < strlen(BA_MyString); i++)
	{
		switch (BA_MyString[i])
		{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'O':
		case 'o':
		case 'u':
		case 'U':
			BA_MyString[i] = '*';
			break;

		default:
			break;
		}
	}
	printf("\n");
	printf("After Replacements string is %s", BA_MyString);

	return 0;
}

