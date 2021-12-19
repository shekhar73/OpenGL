#include<stdio.h>

int main()
{

	//variable declaration
	int BA_i, BA_j;

	//code

	for (BA_i = 0, BA_j = 10; BA_i <= 10, BA_j <= 100; BA_i++, BA_j = BA_j + 10)
	{
		printf("\t %d \t %d \n", BA_i , BA_j);
	}

	printf("\n\n");

	return 0;
}