#include<stdio.h>

int main(void)
{
	//variable declarations
	int iArray[5][3] = { {1,2,3}, {2,3,4},{4,5,6},{7,8,9},{1,3,4} }; //inline initialization

	int int_size;
	int iArray_size;
	int iArray_num_elements, iArray_num_row, iArray_num_columns;

	//code
	printf("\n\n");
	
	int_size = sizeof(int_size);
	iArray_size = sizeof(iArray);

	printf("Size of two Dimensional 2D integer Array Is = %d\n\n", iArray_size);

	iArray_num_row = iArray_size / sizeof(iArray[0]);
	printf("number of row in two dimensional array (2D) Integer Array is = %d\n\n", iArray_num_row);

	iArray_num_columns = sizeof(iArray[0]) / int_size;
	printf("Number of Coloumn in two dimensional array (2D) Integer array is = %d\n\n", iArray_num_columns);

	iArray_num_elements = iArray_num_row * iArray_num_columns;
	printf("Number of element In Two dimensional (2D) integer Array is = %d\n\n", iArray_num_elements);

	printf("\n\n");
	printf("Elements In the 2D Array :\n\n");

	printf("*******ROW 1********");
	printf("iArray[0][0] = %d\t", iArray[0][0]);
	printf("iArray[0][1] = %d\t", iArray[0][1]);
	printf("iArray[0][2] = %d\t", iArray[0][2]);

	printf("\n\n");
	printf("*******ROW 2********");
	printf("iArray[1][0] = %d\t", iArray[1][0]);
	printf("iArray[1][1] = %d\t", iArray[1][1]);
	printf("iArray[1][2] = %d\t", iArray[1][2]);

	printf("\n\n");
	printf("*******ROW 3********");
	printf("iArray[2][0] = %d\t", iArray[2][0]);
	printf("iArray[2][1] = %d\t", iArray[2][1]);
	printf("iArray[2][2] = %d\t", iArray[2][2]);

	printf("\n\n");
	printf("*******ROW 4********");
	printf("iArray[3][0] = %d\t", iArray[3][0]);
	printf("iArray[3][1] = %d\t", iArray[3][1]);
	printf("iArray[3][2] = %d\t", iArray[3][2]);

	printf("\n\n");
	printf("*******ROW 5********");
	printf("iArray[4][0] = %d\t", iArray[4][0]);
	printf("iArray[4][1] = %d\t", iArray[4][1]);
	printf("iArray[4][2] = %d\t", iArray[4][2]);

	printf("\n\n");

	return 0;
}