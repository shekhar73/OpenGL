#include<stdio.h>

#define MAX_STRING_LENGTH 512

//function signature
//int MyStrlen(char[]);

int main()
{
	int MyStrlen(char[]);
	//variable declaration
	char strArray[10][15] = { "Hello!" , "Welcome", "To", "Real", "Time" , "Rendering", "Batch", "(2021)", "Of" , "Astromedicomp" }; // in-Line Initialization

	int BA_char_size;
	int BA_strArray_size;
	int BA_strArray_num_elements, BA_strArray_num_rows, BA_strArray_num_columns;
	int BA_strActual_num_char = 0;
	int i;

	//code
	printf("\n\n");

	BA_char_size = sizeof(char);

	BA_strArray_size = sizeof(strArray);
	printf("Size of Two dimensional array (String Array) Is = %d \n\n", BA_strArray_size);

	BA_strArray_num_rows =  BA_strArray_size / sizeof(strArray[0]);
	BA_strArray_num_columns = sizeof(strArray[0]) / BA_char_size;

	printf("total numnber of row is %d and total number of column is %d\n", BA_strArray_num_rows,  BA_strArray_num_columns);
	
	BA_strArray_num_elements = BA_strArray_num_rows * BA_strArray_num_columns;

	printf("maximum number of element of character in two dimensional array is %d\n", BA_strArray_num_elements);

	for (i = 0; i < BA_strArray_num_rows; i++)
	{
		BA_strActual_num_char = BA_strActual_num_char + MyStrlen(strArray[i]);
	}
	printf("Actual Number of Elements (charcter) in two Dimensional (2D) Character Array is = %d\n\n", BA_strActual_num_char);

	printf("\n\n");

	printf("String In The 2D Array: \n\n");

	printf("%s ", strArray[0]);
	printf("%s ", strArray[1]);
	printf("%s ", strArray[2]);
	printf("%s ", strArray[3]);
	printf("%s ", strArray[4]);
	printf("%s ", strArray[5]);
	printf("%s ", strArray[6]);
	printf("%s ", strArray[7]);
	printf("%s ", strArray[8]);
	printf("%s ", strArray[9]);
	printf("\n\n");

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

