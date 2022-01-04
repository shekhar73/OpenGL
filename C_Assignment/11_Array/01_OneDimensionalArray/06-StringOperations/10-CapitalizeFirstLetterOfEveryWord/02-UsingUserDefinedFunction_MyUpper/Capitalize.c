#include<stdio.h>

#define MAX_STRING_LENGTH 512

#define SPACE ' '
#define FULLSTOP '.'
#define COMMA ','
#define EXCLAMATION '!'
#define QUESTION_MARK '?'

int main()
{

	//function prototype
	int MyStrlen(char[]);
	char MyToUpper(char);

	char BA_Array1[MAX_STRING_LENGTH], BA_CapitalArray[MAX_STRING_LENGTH];
	int BA_iStringLength;
	int i, j;
	int iStringLength;

	printf("Enter A String : \n\n");
	gets_s(BA_Array1, MAX_STRING_LENGTH);

	iStringLength = MyStrlen(BA_Array1);
	j = 0;
	for (i = 0; i < iStringLength; i++)
	{
		if (i == 0)
		{
			BA_CapitalArray[j] = MyToUpper(BA_Array1[i]);
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

	printf("\n\n");
	printf("String Entered By You Is : \n\n");
	printf("%s\n", BA_Array1);
	printf("\n\n");
	printf("String After Capitalizing First Letter Of Every Word : \n\n");
	printf("%s\n", BA_CapitalArray);
	return(0);
}

int MyStrlen(char str[])
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

char MyToUpper(char ch)
{
	//variable declaration
	int BA_num;
	int BA_c;

	BA_num = 'a' - 'A';
	if ((int)ch >= 97 && (int)ch <= 122)
	{
		BA_c = (int)ch - BA_num;
		return((char)BA_c);
	}
	else
		return ch;
}
