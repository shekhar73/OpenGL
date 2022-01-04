#include<stdio.h>

#define NUM_ROWS 5
#define NUM_COLOUMNS 3

int main(void)
{
	//variable declaration
	int BA_iArray_2D[NUM_ROWS][NUM_COLOUMNS];
	
	int BA_iArray_1D[NUM_ROWS * NUM_COLOUMNS];

	int i, j;
	int BA_num;

	printf("Enter element of your choice to fill up the integer 2D Array : \n\n");

	for (i = 0; i < NUM_ROWS; i++)
	{
		printf("For Row Number %d: \n", (i + 1));
		for (j = 0; j < NUM_COLOUMNS; j++)
		{
			printf("Enter Element Number %d : \n", (j + 1));
			scanf("%d", &BA_num);
			BA_iArray_2D[i][j] = BA_num;
		}
		printf("\n\n");
	}
	//Display 2D array
	printf("\nTwo Dimesional (2D) Array of Integers : \n\n");

	for (i = 0; i < NUM_ROWS; i++)
	{
		for (j = 0; j < NUM_COLOUMNS; j++)
		{
			printf("BA_iArray_2D[%d][%d] = %d\n", i, j, BA_iArray_2D[i][j]);
		}
		printf("\n\n");
	}

	//Converting 2d to 1d

	for (i = 0; i < NUM_ROWS; i++)
	{
		for (j = 0; j < NUM_COLOUMNS; j++)
		{
			BA_iArray_1D[(i * NUM_COLOUMNS) + j] =  BA_iArray_2D[i][j];
		}
	}

	//printting 1d Array
	printf("\n 1D array is\n");

	for (i = 0; i < (NUM_ROWS * NUM_COLOUMNS); i++)
	{
		printf("BA_iArray_1D[%d] = %d\n", i, BA_iArray_1D[i]);
	}

	printf("\n\n");

	return 0;

}