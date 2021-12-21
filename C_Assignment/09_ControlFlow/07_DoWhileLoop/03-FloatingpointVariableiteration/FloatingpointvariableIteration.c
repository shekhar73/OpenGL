#include<stdio.h>
int main()
{
	//variable declaration
	float f;
	float f_num = 1.7f;

	//code
	printf("\n\n");
	printf("Printing a numbers %f to %f: \n\n", f_num, (f_num * 10));

	f = f_num;

	do
	{
		printf("\t%f\n", f);
		f = f + f_num;
	} while (f <= (f_num * 10.0f));

	printf("\n\n");

	return 0;
}