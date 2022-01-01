#include<stdio.h>
void MyStrCpy(char[], char[]);
#define MAX_STRING_LENGTH 512

int main()
{
	//variable declaration
	char BA_chArray_Orignal[MAX_STRING_LENGTH], BA_chArray_copy[MAX_STRING_LENGTH];

	printf("\n");
	printf("Enter a string: \n");
	gets_s(BA_chArray_Orignal, MAX_STRING_LENGTH);

	MyStrCpy(BA_chArray_copy, BA_chArray_Orignal);

	printf("\n\n");
	printf("Orignal string ENter by you is %s\n", BA_chArray_Orignal);
	printf("Copied string is %s\n", BA_chArray_copy);

	return 0;
}

void MyStrCpy(char strdest[], char strSource[])
{
	int BA_StrLen = 0;
	int i = 0;
	for (i = 0; i < MAX_STRING_LENGTH; i++)
	{
		if (strSource[i] == '\0')
		{
			break;
		}
		else
		{
			BA_StrLen++;
		}
	}

	for (i = 0; i < BA_StrLen; i++)
	{
		strdest[i] = strSource[i];
	}

	strdest[i] = '\0';

}