#include<stdio.h>

#define NUM_ELEMENT 10
int main(void)
{
	//variable declaration
	int iArray[NUM_ELEMENT];
	int i;

	printf("Enter integer element for array :\n\n");

	for (i = 0; i < NUM_ELEMENT; i++)
	{
		scanf("%d", &iArray[i]);
	}

	//Seprating Out Even Number from array element
	printf("\n\n");

	printf("Even Number Amongst The Array Elements Are :\n\n");
	for (i = 0; i < NUM_ELEMENT; i++)
	{
		if ((iArray[i] % 2) == 0)
		{
			printf("%d\t", iArray[i]);
		}
	}

	//Seprating Out Odd Number from array element
	printf("\n\n");
	printf("Odd Number Amongst the Array element are : \n\n");

	for (i = 0; i < NUM_ELEMENT; i++)
	{
		if ((iArray[i] % 2) != 0)
		{
			printf("%d\t", iArray[i]);
		}
	}

	return 0;

}