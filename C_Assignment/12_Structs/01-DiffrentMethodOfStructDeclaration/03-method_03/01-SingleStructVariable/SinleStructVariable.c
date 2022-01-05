#include<stdio.h>

int main()
{
	struct Demo
	{
		int i;
		float f;
		double d;
		char ch;
	}obj;


	//variable declaration
	int iSize;
	int fSize;
	int dSize;
	int structDemoSize;

	//code
	//assigning value to the data members of Demo structure
	obj.i = 10;
	obj.f = 10.0f;
	obj.d = 11.1111;

	//Displaying the values of data member of Demo structure
	printf("\n\n");
	printf("i = %d\n", obj.i);
	printf("f = %f\n", obj.f);
	printf("d = %lf\n", obj.d);

	//Displaying the Sizes of data type
	printf("\n");
	printf("Dipalying the data sizes with respective data types");
	printf("iSize = %d\n", sizeof(iSize));
	printf("fSize = %d\n", sizeof(fSize));
	printf("dSize = %d\n", sizeof(dSize));
	printf("structdemosize = %d\n", sizeof(structDemoSize));

	return 0;



}