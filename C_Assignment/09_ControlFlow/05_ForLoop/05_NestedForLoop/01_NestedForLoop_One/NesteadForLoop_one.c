#include<stdio.h>
int main()
{
	int BA_i, BA_j;

	//code
	printf("\n");
	for (BA_i = 1; BA_i < 10; BA_i++)
	{
		printf("BA_i = %d\n", BA_i);
		printf("------\n\n");

		for (BA_j = 1; BA_j <= 5; BA_j++)
		{
			printf("\tj = %d\n", BA_j);
		}
		printf("\n\n");
	}

	return 0;
}