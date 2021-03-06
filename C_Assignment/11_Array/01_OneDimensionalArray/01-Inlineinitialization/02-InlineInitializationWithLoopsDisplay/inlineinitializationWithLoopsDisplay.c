#include<stdio.h>

int main()
{
	//variable declaration

	int iArray[] = { 9, 30, 6, 12, 98, 95, 20, 23, 2, 45 };
	int int_size;
	int iArray_size;
	int iArray_num_elements;

	float fArray[] = { 1.2f, 2.3f, 3.4f, 4.5f, 5.6f, 6.7f, 7.8f, 8.9f };
	int float_size;
	int fArray_size;
	int fArray_num_elements;

	char cArray[] = { 'A' , 's', 'T' , 'R', 'O' , 'M', 'E' , 'D' , 'I', 'C' , 'O', 'M', 'P' };
	int BA_char_size;
	int cArray_size;
	int cArray_num_elements;

	int i;

	//code
	printf("\n\n");
	printf("In-Line Initialization And Loop (for) Display Of Elements Of array 'iArray[]':\n\n ");

	int_size = sizeof(int);
	iArray_size = sizeof(iArray);
	iArray_num_elements = iArray_size / int_size;

	for (i = 0; i < iArray_num_elements; i++)
	{
		printf("iArray[%d] (Element %d) = %d\n", i, (i + 1), iArray[i]);
	}

	printf("Size Of Data Type int = %d bytes\n", int_size);
	printf("Number of element In 'int' 'iArray[]' = %d Elements\n", iArray_num_elements);
	printf("Size of Array 'iArray[]' (%d Elements * %d Bytes) = %d Bytes\n\n", iArray_num_elements, int_size, iArray_size);

	printf("\n\n");
	printf("In Line Initialization And Loop (while) Display of Elements Of Array 'fArray[]' :\n\n");

	float_size = sizeof(float);
	fArray_size = sizeof(fArray_size);
	fArray_num_elements = fArray_size / float_size;

	i = 0;
	while (i < fArray_num_elements)
	{
		printf("fArray[%d] (Element %d) = %f\n", i, (i + 1), fArray[i]);
		i++;
	}

	printf("\n\n");
	printf("Size of data type 'float' = %d Bytes \n", float_size);
	printf("Number of element in  'float' Array 'fArray[]' = % d Elements\n", fArray_num_elements);
	printf("Size of Array 'fArray[]' (%d Elements * %d bytes) = %d Bytes \n\n", fArray_num_elements, float_size, fArray_size);

	//******** cArray[] ********
	printf("\n\n");

	BA_char_size = sizeof(char);
	cArray_size = sizeof(cArray);
	cArray_num_elements = cArray_size / BA_char_size;

	i = 0;
	do
	{
		printf("cArray[%d] (Element %d) = %c\n", i, (i + 1), cArray[i]);
		i++;
	} while (i < cArray_num_elements);

	printf("\n\n");
	printf("Size Of Data Type 'char' = %d bytes\n", BA_char_size);
	printf("Number Of Elements In 'char' Array 'cArray[]' = %d Elements\n", cArray_num_elements);
	printf("Size Of Array 'cArray[]' (%d Elements * %d Bytes) = %d Bytes\n\n", cArray_num_elements, BA_char_size, cArray_size);

	return 0;

}