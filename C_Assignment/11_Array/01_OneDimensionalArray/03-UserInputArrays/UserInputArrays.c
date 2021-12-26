#include<stdio.h>

//MACRO constant used as array size IN subscript and as array length.

#define INT_ARRAY_NUM_ELEMENTS 5
#define FLOAT_ARRAY_NUM_ELEMENTS 3
#define CHAR_ARRAY_NUM_ELEMENTS 15

int main()
{
	//variable declaration
	int iArray[INT_ARRAY_NUM_ELEMENTS];
	float fArray[FLOAT_ARRAY_NUM_ELEMENTS];
	char cArray[CHAR_ARRAY_NUM_ELEMENTS];

	int i, num;

	//code
	printf("\n\n");
	printf("Enter Elements for integer array:\n");
	for (i = 0; i < INT_ARRAY_NUM_ELEMENTS; i++)
	{
		scanf("%d", &iArray[i]);
	}
	printf("\n\n");
	printf("Enter elements for Floating Point array: \n");

	for (i = 0; i < FLOAT_ARRAY_NUM_ELEMENTS; i++)
	{
		scanf("%f", &fArray[i]);
	}

	printf("\n\n");

	printf("Enter elements for character point array:\n");
	for (i = 0; i < CHAR_ARRAY_NUM_ELEMENTS; i++)
	{
		cArray[i] = getch();
		printf("%c\n", cArray[i]);
	}
	
	//Array elements output

	printf("\n\n");
	printf("integer array Enter by you\t");

	for (i = 0; i < INT_ARRAY_NUM_ELEMENTS; i++)
	{
		printf("%d\t", iArray[i]);
	}

	printf("\n\n");
	printf("Floating point array Enter by you\t");

	for (i = 0; i < FLOAT_ARRAY_NUM_ELEMENTS; i++)
	{
		printf("%f\t", fArray[i]);
	}

	printf("\n\n");
	printf("Character point array Enter by you\t");

	for (i = 0; i < CHAR_ARRAY_NUM_ELEMENTS; i++)
	{
		printf("%c\t", cArray[i]);
	}

	return 0;
}
