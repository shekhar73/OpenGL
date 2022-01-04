#include<stdio.h>

int main(void)
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

	//Dsiplay the Array element
	printf("****** ROW 1 ******\n");
	printf("****** COLUMN 1 ******\n");
	printf("BA_iArray[0][0][0] = %d\n", BA_iArray[0][0][0]);
	printf("BA_iArray[0][0][1] = %d\n", BA_iArray[0][0][1]);
	printf("\n");
	printf("****** COLUMN 2 ******\n");

	printf("BA_iArray[0][1][0] = %d\n", BA_iArray[0][1][0]);
	printf("BA_iArray[0][1][1] = %d\n", BA_iArray[0][1][1]);
	printf("\n");
	printf("****** COLUMN 3 ******\n");
	printf("BA_iArray[0][2][0] = %d\n", BA_iArray[0][2][0]);
	printf("BA_iArray[0][2][1] = %d\n", BA_iArray[0][2][1]);
	printf("\n\n");
	// ****** ROW 2 ******
	printf("****** ROW 2 ******\n");
	printf("****** COLUMN 1 ******\n");
	printf("BA_iArray[1][0][0] = %d\n", BA_iArray[1][0][0]);
	printf("BA_iArray[1][0][1] = %d\n", BA_iArray[1][0][1]);
	printf("\n");
	printf("****** COLUMN 2 ******\n");
	printf("BA_iArray[1][1][0] = %d\n", BA_iArray[1][1][0]);
	printf("BA_iArray[1][1][1] = %d\n", BA_iArray[1][1][1]);
	printf("\n");
	printf("****** COLUMN 3 ******\n");
	printf("BA_iArray[1][2][0] = %d\n", BA_iArray[1][2][0]);
	printf("BA_iArray[1][2][1] = %d\n", BA_iArray[1][2][1]);
	printf("\n\n");
	// ****** ROW 3 ******
	printf("****** ROW 3 ******\n");
	printf("****** COLUMN 1 ******\n");
	printf("BA_iArray[2][0][0] = %d\n", BA_iArray[2][0][0]);
	printf("BA_iArray[2][0][1] = %d\n", BA_iArray[2][0][1]);
	printf("\n");
	printf("****** COLUMN 2 ******\n");
	printf("BA_iArray[2][1][0] = %d\n", BA_iArray[2][1][0]);
	printf("BA_iArray[2][1][1] = %d\n", BA_iArray[2][1][1]);
	printf("\n");
	printf("****** COLUMN 3 ******\n");
	printf("BA_iArray[2][2][0] = %d\n", BA_iArray[2][2][0]);
	printf("BA_iArray[2][2][1] = %d\n", BA_iArray[2][2][1]);
	printf("\n\n");
	// ****** ROW 4 ******
	printf("****** ROW 4 ******\n");
	printf("****** COLUMN 1 ******\n");
	printf("BA_iArray[3][0][0] = %d\n", BA_iArray[3][0][0]);
	printf("BA_iArray[3][0][1] = %d\n", BA_iArray[3][0][1]);
	printf("\n");
	printf("****** COLUMN 2 ******\n");
	printf("BA_iArray[3][1][0] = %d\n", BA_iArray[3][1][0]);

	printf("BA_iArray[3][1][1] = %d\n", BA_iArray[3][1][1]);
	printf("\n");
	printf("****** COLUMN 3 ******\n");
	printf("BA_iArray[3][2][0] = %d\n", BA_iArray[3][2][0]);
	printf("BA_iArray[3][2][1] = %d\n", BA_iArray[3][2][1]);
	printf("\n\n");
	// ****** ROW 5 ******
	printf("****** ROW 5 ******\n");
	printf("****** COLUMN 1 ******\n");
	printf("BA_iArray[4][0][0] = %d\n", BA_iArray[4][0][0]);
	printf("BA_iArray[4][0][1] = %d\n", BA_iArray[4][0][1]);
	printf("\n");
	printf("****** COLUMN 2 ******\n");
	printf("BA_iArray[4][1][0] = %d\n", BA_iArray[4][1][0]);
	printf("BA_iArray[4][1][1] = %d\n", BA_iArray[4][1][1]);
	printf("\n");
	printf("****** COLUMN 3 ******\n");
	printf("BA_iArray[4][2][0] = %d\n", BA_iArray[4][2][0]);
	printf("BA_iArray[4][2][1] = %d\n", BA_iArray[4][2][1]);
	printf("\n\n");

	return 0;


}