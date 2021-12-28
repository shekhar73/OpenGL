#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
	//function prtotype
	int MyStrlen(char[]);

	//variable declaration

	char strArray[6][11] = { "My", "Name", "is", "Babasaheb", "Haribhau", "Argade" };

	int iStrLengths[10];

	int BA_strArray_size;
	int BA_strArray_num_rows;
	int i, j;

	//code
	BA_strArray_size = sizeof(strArray);
	BA_strArray_num_rows = BA_strArray_size / sizeof(strArray[0]);

	//sorting in lengths of all the strings...
	for (i = 0; i < BA_strArray_num_rows; i++)
	{
		iStrLengths[i] = MyStrlen(strArray[i]);
	}
	printf("\n\n");
	printf("The Entire string Array is: \n\n");

	for (i = 0; i < BA_strArray_num_rows; i++)
	{
		printf("%s ", strArray[i]);
	}
	printf("\n\n");
	printf("Strings In the 2D Array :\n\n");

	for (i = 0; i < BA_strArray_num_rows; i++)
	{
		printf("String Number %d => %s\n\n", (i + 1), strArray[i]);
		for (j = 0; j < iStrLengths[i]; j++)
		{
			printf("Character %d = %c\n", (j + 1), strArray[i][j]);
		}
		printf("\n\n");
	}
	return 0;
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

