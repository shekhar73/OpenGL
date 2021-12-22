#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[], char* envp[])
{
	//variable declaration
	int i;

	//code
	if (argc != 4)
	{
		printf("\n\n");
		printf("Invallid Usage !!! Exitting Now ... \n\n");
		printf("Usage : CommandlineArgumentApplication <first name> <middle name> <sirname>\n\n");

		exit(0);
	}

	printf("\n\n");
	printf("Your Full Name is :");

	for (i = 1; i < argc; i++)
	{
		printf("%s ", argv[i]);
	}

	printf("\n\n");

	return 0;
}