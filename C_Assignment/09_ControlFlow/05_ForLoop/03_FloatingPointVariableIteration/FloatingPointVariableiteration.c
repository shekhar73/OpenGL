#include<stdio.h>

int main()
{
	//variable declaration
	float Ba_f;
	float Ba_num = 1.7f;

	//code

	printf("\n\n");

	printf("Printing number to %f to %f : \n\n", Ba_num, (Ba_num * 10.0f));

	for (Ba_f = Ba_num; Ba_f <= (Ba_num * 10.0f); Ba_f = Ba_f + Ba_num)
	{
		printf("\t%f\n", Ba_f);
	}

	printf("\n\n");

	return 0;
}