#include<stdio.h>
#define MAX_STRING_LENGTH 512
int main()
{
	char str_Array[MAX_STRING_LENGTH];
	int iStringLength = 0;
	int i;
	int spaceCnt = 0;

	printf("\n");

	printf("Enter a String\n\n");
	gets_s(str_Array, MAX_STRING_LENGTH);

	iStringLength = strlen(str_Array);

	for (i = 0; i < iStringLength; i++)
	{
		if (str_Array[i] == ' ')
		{
			spaceCnt++;
		}
	}

	printf("Total spaces in string is %d\n", spaceCnt);
	printf("Total word in string is %d\n", (spaceCnt + 1));

	return 0;
}