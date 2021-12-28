#include<stdio.h>

int main()
{
	//variable declaration

	int iArray[5][3] = { { 1, 2 , 3}, {2, 4, 6} , {3, 6, 9}, {4, 8, 12}, {5, 10, 15} }; //inline initialization

	int BA_int_size;
	int BA_iArray_size;
	int iArray_num_elements, iArray_num_rows, iArray_num_coloumns;
	int i, j;

	//code
	printf("\n\n");

	BA_int_size = sizeof(int);
	BA_iArray_size = sizeof(iArray);

	printf("size Of two Dimensional ( 2D ) Integer Array Is = %d\n\n", BA_iArray_size);

	iArray_num_rows = BA_iArray_size / sizeof(iArray[0]);
	printf("Number of row in two Dimensional (2D) Integer Array is = %d\n\n", iArray_num_rows);

	iArray_num_coloumns = sizeof(iArray[0]) / sizeof(BA_int_size);
	printf("Number of Column in two Dimensional (2D) integer Array is = %d\n\n", iArray_num_coloumns);

	printf("\n\n");

	printf("Elements In the 2D Array : \n\n");

	for (i = 0; i < iArray_num_rows; i++)
	{
		for (j = 0; j < iArray_num_coloumns; j++)
		{
			printf("iArray[%d][%d] = %d\n", i, j, iArray[i][j]);
		}
		printf("\n\n");
	}

	return 0;
}