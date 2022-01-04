#include<stdio.h>
int main()
{
	int BA_iArray[5][3][2] = { { {1,2}, {2,3}, {4,5}  },
							{ {5,2}, {1,3}, {1,5}  },
							{ {6,2}, {9,3}, {4,5}  },
							{ {1,2}, {6,3}, {3,5}  },
							{ {1,2}, {2,3}, {9,5}  }
	};

	int BA_int_size;
	int BA_ArraySize;
	int BA_ArrayNumelement, BA_arrayWidth, BA_array_height, BA_Array_depth;
	int i, j, k;
	printf("\n\n");

	BA_int_size = sizeof(int);
	BA_ArraySize = sizeof(BA_iArray);

	printf("size of 3 dimensional array is %d", BA_ArraySize);

	BA_arrayWidth = BA_ArraySize / sizeof(BA_iArray[0]);
	printf("Number of rows in three dimensional array is = %d\n", BA_arrayWidth);

	BA_array_height = sizeof(BA_iArray[0]) / sizeof(BA_iArray[0][0]);
	printf("Number of Columns in three dimensional array is = %d\n", BA_array_height);


	BA_Array_depth = sizeof(BA_iArray[0][0]) / BA_int_size;

	BA_ArrayNumelement = BA_arrayWidth * BA_array_height * BA_Array_depth;

	for (i = 0; i < BA_arrayWidth; i++)
	{
		for (j = 0; j < BA_array_height; j++)
		{
			for (k = 0; k < BA_Array_depth; k++)
			{
				printf("BA_iArray[%d][%d][%d] = %d\n", i,j,k,BA_iArray[i][j][k]);
			}
			printf("\n");
		}
		printf("\n\n");
	}

}