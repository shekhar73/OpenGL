#include<stdio.h>
//function prototype
int MyStrlen(char[]);

#define MAX_STRING_LENGTH 512
int main()
{
	//varaible declaration
	char BA_chArray[MAX_STRING_LENGTH];
	int BA_iStringLength = 0;

	//code
	printf("\n\n");
	printf("Enter a string :\n\n");
	gets_s(BA_chArray, MAX_STRING_LENGTH);

	printf("\n\n");
	printf("String ENtered By You is :\n\n");
	printf("%s\n", BA_chArray);

	BA_iStringLength = MyStrlen(BA_chArray);

	printf("Length of string is %d character !!!\n\n", BA_iStringLength);

}

int MyStrlen(char str[])
{
	int i = 0;
	int BA_iStringLength = 0;

	for (i = 0; i < MAX_STRING_LENGTH; i++)
	{
		if (str[i] == '\0')
		{
			break;
		}
		else
		{
			BA_iStringLength++;
		}
	}

	return BA_iStringLength;
}