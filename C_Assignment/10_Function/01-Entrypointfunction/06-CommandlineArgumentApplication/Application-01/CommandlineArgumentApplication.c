#include<stdio.h> // contain declaration of printf()
#include<ctype.h> // contain declaration of atoi()
#include<stdlib.h> // contain declaration of exit()

int main(int argc, char* argv[], char* envp[])
{
	//variable declaration
	int i;
	int num;
	int sum = 0;

	//code
	if (argc == 1)
	{
		printf("\n\n");
		printf("No Numbers Given For Addition !!! Exitting now ...\n\n");
		printf("Usage : CommandlineArgumentsApplication <first number> <second number>...\n\n");

		exit(0);
	}

	printf("\n\n");
	printf("Sum Of All integer Command Line Arguments Is : \n\n");

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		sum = sum + num;
	}

	printf("sum = %d\n\n", sum);

	return 0;
}