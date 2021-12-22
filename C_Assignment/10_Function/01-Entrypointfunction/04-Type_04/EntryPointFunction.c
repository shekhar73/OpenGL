#include<stdio.h>

int main(int argc, char* argv[])
{
	//variable declaration
	int i;

	//code
	printf("\n\n");
	printf("Hello world !!!\n\n");
	printf("Number line of command line argument = %d\n\n", argc);

	printf("Command line Argument Passed To this Program Are : \n\n");

	for (i = 0; i < argc; i++)
	{
		printf("Command line Argument Number %d = %s\n", (i + 1), argv[i]);
	}

	printf("\n\n");

	return 0;

}