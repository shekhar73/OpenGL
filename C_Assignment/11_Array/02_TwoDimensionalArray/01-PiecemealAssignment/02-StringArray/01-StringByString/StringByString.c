#include<stdio.h>
#define MAX_STRING_LENGTH 512

int main(void)
{
	//function prototype
	void MyStrcpy(char[], char[]);

	char BA_strArray[5][10];
	int BA_char_size;
	int strArray_size;
	int strArray_num_elements, strArray_num_rows, strArray_num_columns;
	int i;

	printf("\n\n");

	BA_char_size = sizeof(char);

	MyStrcpy(BA_strArray[0], "My");
	MyStrcpy(BA_strArray[1], "Name");
	MyStrcpy(BA_strArray[2], "Is");
	MyStrcpy(BA_strArray[3], "babasaheb");
	MyStrcpy(BA_strArray[4], "Argade");

	printf("\n\n");
	printf("The Strings in the 2d character array are: \n\n");

	for (i = 0; i < 5; i++)
	{
		printf("%s ", BA_strArray[i]);
	}

	printf("\n\n");

	return 0;
}

void MyStrcpy(char strDest[], char strSource[])
{
	//function prototype
	int Mystrlen(char[]);

	//variable declaration
	int iStringLength = 0;
	int j;

	//code
	iStringLength = MyStrlen(strSource);

	for (j = 0; j < iStringLength; j++)
	{
		strDest[j] = strSource[j];
	}

	strDest[j] = '\0';
}

int MyStrlen(char str[])
{
	//variable declaration
	int j;
	int string_length = 0;

	//code
	for (j = 0; j < MAX_STRING_LENGTH; j++)
	{
		if (str[j] == '\0')
		{
			break;
		}
		else
		{
			string_length++;
		}
	}

	return string_length;
}

