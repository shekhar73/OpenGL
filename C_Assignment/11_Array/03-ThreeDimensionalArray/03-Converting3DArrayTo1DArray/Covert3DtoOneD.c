#include<stdio.h>

int main(void)
{
	int BA_iArray[5][3][2] = { { {1,2}, {2,3}, {4,5}  },
							{ {5,2}, {1,3}, {1,5}  },
							{ {6,2}, {9,3}, {4,5}  },
							{ {1,2}, {6,3}, {3,5}  },
							{ {1,2}, {2,3}, {9,5}  }
	};

	int i, j, k;

	int BA_iArray_1D[5 * 3 * 2];

	printf("Element in 3D array is\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 2; k++)
			{
				printf("BA_iArray[%d][%d][%d] = %d\n", i, j, k, BA_iArray[i][j][k]);
			}
			printf("\n");
		}
		printf("\n\n");
	}

	//Convert 3d to 1d
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 2; k++)
			{
				BA_iArray_1D[(i * 3 * 2) + (j * 2) + k] = BA_iArray[i][j][k];
			}
		}	
	}

	//print 1D array

	printf("Elements In 1 D array is");
	for (i = 0; i < (5 * 3 * 2); i++)
	{
		printf("Array[%d] = %d", i, BA_iArray_1D[i]);
	}

	return 0;
}