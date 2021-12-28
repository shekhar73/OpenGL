#include<stdio.h>

int main(void)
{
	//variable declaration
	int BA_iArray[3][5];
	int BA_int_size;
	int BA_iArray_size;
	int BA_iArray_num_elements, BA_iArray_num_rows, BA_iArray_num_columns;
	int i, j;

	//code
	printf("\n\n");

	BA_int_size = sizeof(int);
	BA_iArray_size = sizeof(BA_iArray);

	printf("size of 2 dimensional array is %d\n", BA_iArray_size);

	BA_iArray_num_rows = BA_iArray_size / sizeof(BA_iArray[0]);
	printf("Size of number of row of array is %d", BA_iArray_num_rows);

	BA_iArray_num_columns = sizeof(BA_iArray[0]) / BA_int_size;
	printf("Size of number of coloumn of array is %d", BA_iArray_num_columns);

	BA_iArray_num_elements = BA_iArray_num_rows * BA_iArray_num_columns;

	printf("Number of element of  2 dimensional array is %d", BA_iArray_num_elements);

	printf("\n\n");
	printf("Element In the 2D Array : \n\n");


	return 0;

}