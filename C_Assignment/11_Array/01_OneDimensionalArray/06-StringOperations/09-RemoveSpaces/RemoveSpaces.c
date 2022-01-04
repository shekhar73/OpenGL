#include<stdio.h>


#define MAX_STRING_LENGTH 512
int main(void)
{
	int MyStrLen(char[]);

	char BA_Array1[MAX_STRING_LENGTH], BA_Array2[MAX_STRING_LENGTH];

	int iStringLen = 0 , i;
	printf("\n");

	printf("Enter a String\n");
	gets_s(BA_Array1, MAX_STRING_LENGTH);

	iStringLen = MyStrLen(BA_Array1);
	int j = 0;
	for (i = 0; i < iStringLen; i++)
	{
		if (BA_Array1[i] == ' ')
		{
			continue;
		}
		else
		{
			BA_Array2[j] = BA_Array1[i];
			j++;
		}
	}
	BA_Array2[i] = '\0';

	printf("\n");
	printf("After Remove spaces string is %s\n", BA_Array2);

	return 0;
}
int MyStrLen(char str[])
{
	int i;
	int strlen = 0;

	for (i = 0; i < MAX_STRING_LENGTH; i++)
	{
		if (str[i] == '\0')
		{
			break;
		}
		else
		{
			strlen++;
		}
	}

	return strlen;
}

