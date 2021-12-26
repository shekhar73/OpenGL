#include<stdio.h>

#define NUM_ELEMENTS 10

int main(void)
{
	//variable declaration
	int iArray[NUM_ELEMENTS];
	int i, num, j, count = 0;

	//code
	printf("\n\n");

	//*** ARRAY ELEMENTS INPUT ***
	printf("Enter Integer Elements for Array: \n\n");

	for (i = 0; i < NUM_ELEMENTS; i++)
	{
		scanf("%d", &num);
		if (num < 0)
		{
			num = -1 * num;
		}
		iArray[i] = num;
	}

	//Printing ENTIRE ARRAY
	printf("\n\n");
	printf("Array elements Are: \n\n");

	for (i = 0; i < NUM_ELEMENTS; i++)
	{
		printf("%d\t", iArray[i]);
	}

	//***Seprating Out Prime Number from array
	printf("\n\n");
	printf("Prime Number Amongst The Array Elements Are: \n\n");
	for (i = 0; i < NUM_ELEMENTS; i++)
	{
		for (j = 1; j <= iArray[i]; j++)
		{
			if ((iArray[i] % j) == 0)
			{
				count++;
			}
		}
		if (count == 2)
		{
			printf("%d\t", iArray[i]);
		}

		count = 0;
	}

	return 0;

}