#include<stdio.h>

int main()
{
	int BA_iArray_One[5];
	int BA_iArray_Two[5][3];
	int BA_iArray_Three[100][100][5];

	int num_rows_2D;
	int num_columns_2D;
	int num_rows_3D;
	int num_columns_3D;
	int depth_3D;
	
	printf("\n\n");
	printf("Size of 1-D integer array BA_iArray_One = %lu\n", sizeof(BA_iArray_One));
	printf("Number of elements in 1-D integer array BA_iArray_One = %lu\n", (sizeof(BA_iArray_One) / sizeof(int)));

	printf("\n\n");
	printf("Size of 2-D integer array BA_iArray_Two = %lu\n", sizeof(BA_iArray_Two));
	printf("Number rows in 2-D integer array BA_iArray_Two = %lu\n", (sizeof
	(BA_iArray_Two) / sizeof(BA_iArray_Two[0])));
	num_rows_2D = (sizeof(BA_iArray_Two) / sizeof(BA_iArray_Two[0]));
	printf("Number of elements (columns) in each row in 2-D integer array BA_iArray_Two = % lu\n", (sizeof(BA_iArray_Two[0]) / sizeof(BA_iArray_Two[0][0])));
	num_columns_2D = (sizeof(BA_iArray_Two[0]) / sizeof(BA_iArray_Two[0][0]));
	printf("Number of elements in total in 2-D Array BA_iArray_Two = %d\n",(num_rows_2D * num_columns_2D));
	printf("\n\n");
	printf("\n\n");
	printf("Size of 3-D integer array BA_iArray_Three = %lu\n", sizeof(BA_iArray_Three));
	printf("Number rows in 3-D integer array BA_iArray_Three = %lu\n", (sizeof(BA_iArray_Three) / sizeof(BA_iArray_Three[0])));
	num_rows_3D = (sizeof(BA_iArray_Three) / sizeof(BA_iArray_Three[0]));
	printf("Number of elements (columns) in one row in 3-D integer array BA_iArray_Three = % lu\n", (sizeof(BA_iArray_Three[0]) / sizeof(BA_iArray_Three[0][0])));
	num_columns_3D = (sizeof(BA_iArray_Three[0]) / sizeof(BA_iArray_Three[0][0]));
	printf("Number of elements (depth) in one column in one row in 3-D integerarray iArray_Three = % lu\n", (sizeof(BA_iArray_Three[0][0]) / sizeof(BA_iArray_Three[0][0][0])));

	return 0;
}