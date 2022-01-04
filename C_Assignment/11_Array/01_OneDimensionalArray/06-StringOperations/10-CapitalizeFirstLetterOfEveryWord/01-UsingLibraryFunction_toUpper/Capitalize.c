#include<stdio.h>
#include<ctype.h>

#define MAX_STRING_LENGTH 512

int main()
{
	//function prototype
	int MyStrLen(char[]);

	//code
	char BA_Array1[MAX_STRING_LENGTH];
	char BA_CapitalArray[MAX_STRING_LENGTH];

	int i, j, iStringLength;

	printf("\n");
	printf("Enter a string \n");
	gets_s(BA_Array1, MAX_STRING_LENGTH);

	iStringLength = MyStrLen(BA_Array1);
	j = 0;

	for (i = 0; i < iStringLength; i++)
	{
		if (i == 0)
		{
			BA_CapitalArray[j] = toupper(BA_Array1[i]);
		}
		else if (BA_Array1[i] == ' ')
		{
			BA_CapitalArray[j] = BA_Array1[i];
			BA_CapitalArray[j + 1] = BA_Array1[i + 1];

			i++;
			j++;
		}
		else
		{
			BA_CapitalArray[j] = BA_Array1[i];
		}
		j++;
	}

	BA_CapitalArray[j] = '\0';

	printf("String After capitailization First Letter of every word : \n\n");
	printf("%s\n", BA_CapitalArray);

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