#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main()
{
	//function prototype
	void MyStrCat(char[], char[]);

	char BA_Array_one[MAX_STRING_LENGTH], BA_Array_two[MAX_STRING_LENGTH];

	printf("\n\n");
	printf("Enter a first string\n");
	gets_s(BA_Array_one, MAX_STRING_LENGTH);

	printf("Enter a Second  String\n");
	gets_s(BA_Array_two, MAX_STRING_LENGTH);

	MyStrCat(BA_Array_one, BA_Array_two);

	return 0;
}

void MyStrCat(char str_Dest[], char str_source[])
{
	int iStringDestLength = 0, iStringSourceLength = 0 , i;
	iStringDestLength = strlen(str_Dest);
	iStringSourceLength = strlen(str_source);
	
	for (i = 0; i < iStringSourceLength; i++)
	{
		str_Dest[iStringDestLength] = str_source[i];
		if (str_source[i] == '\0')
		{
			break;
		}
		iStringDestLength++;
	}
	
	printf("After Concatenation String is %s", str_Dest);
}