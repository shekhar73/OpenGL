#include <stdio.h>
#define MAX_STRING_LENGTH 512

int main(void)
{
	char BA_strArray[5][10]; 
	int BA_char_size;
	int BA_strArray_size;
	int BA_strArray_num_elements, BA_strArray_num_rows, BA_strArray_num_columns;
	int i;
	//code
	printf("\n\n");
	BA_char_size = sizeof(char);
	BA_strArray_size = sizeof(BA_strArray);
	
	BA_strArray[0][0] = 'M';
	BA_strArray[0][1] = 'y';
	BA_strArray[0][2] = '\0';

	BA_strArray[1][0] = 'N';
	BA_strArray[1][1] = 'a';
	BA_strArray[1][2] = 'm';
	BA_strArray[1][3] = 'e';
	BA_strArray[1][4] = '\0';

	BA_strArray[2][0] = 'I';
	BA_strArray[2][1] = 's';
	BA_strArray[2][2] = '\0';

	BA_strArray[3][0] = 'B';
	BA_strArray[3][1] = 'a';
	BA_strArray[3][2] = 'B';
	BA_strArray[3][3] = 'a';
	BA_strArray[3][4] = 's';
	BA_strArray[3][5] = 'a';
	BA_strArray[3][6] = 'b';
	BA_strArray[3][7] = '\0';

	BA_strArray[4][0] = 'A';
	BA_strArray[4][1] = 'r';
	BA_strArray[4][2] = 'g';
	BA_strArray[4][3] = 'a';
	BA_strArray[4][4] = 'd';
	BA_strArray[4][5] = 'e';
	BA_strArray[4][6] = 'e';
	BA_strArray[4][7] = '\0'; 
	printf("\n\n");
	printf("The Strings In the 2D Character Array Are : \n\n");
	for (i = 0; i < 5; i++)
	{
		printf("%s ", BA_strArray[i]);
	}	
	printf("\n\n");

	return 0;
}
int MyStrlen(char str[])
{
	//variable declarations
	int j;
	int string_length = 0;
	
	for (j = 0; j < MAX_STRING_LENGTH; j++) 
	{
		if
			(str[j] == '\0'
				)
			break
			;
		else
			string_length++;
	}
	return  string_length;
}
