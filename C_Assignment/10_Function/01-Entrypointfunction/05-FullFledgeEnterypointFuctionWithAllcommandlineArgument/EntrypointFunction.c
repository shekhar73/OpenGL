#include<stdio.h>

int main(int argc, char *argv[], char *envp[])
{
	//variable declaration
	int i;

	//code
	printf("\n\n");
	printf("HEllo world !!!\n\n");

	printf("Number of Command Line Argument = %d\n\n", argc);

	printf("Command Line Argument Passed To This Program Are : \n\n");
	for (i = 0; i < argc; i++)
	{
		printf("Commandline Argument Number %d = %s\n", (i + 1), argv[i]);
	}
	printf("\n\n");

	printf("First 20 Environmental variable Passes to this program Are : \n\n");

	for (i = 0; i < 20; i++)
	{
		printf("Enviromental Variable Number %d = %s\n", (i + 1), envp[i]);
	}

	printf("\n\n");

	return 0;
}