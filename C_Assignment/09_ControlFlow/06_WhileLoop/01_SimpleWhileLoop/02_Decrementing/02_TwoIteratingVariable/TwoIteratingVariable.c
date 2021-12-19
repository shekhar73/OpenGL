#include<stdio.h>
int main()
{
	//variable declaration
	int BA_i , BA_j;

	//code

	printf("\n\n");
	BA_i = 10;
	BA_j = 100;

	printf("Printing DIgits 10 to 1 and 100 to 10: \n\n");

	while (BA_i >= 1 , BA_j >=10)
	{
		printf("\t%d \t %d\n", BA_i , BA_j);
		BA_i--;
		BA_j = BA_j - 10;
	}

	printf("\n");
	return 0;

}