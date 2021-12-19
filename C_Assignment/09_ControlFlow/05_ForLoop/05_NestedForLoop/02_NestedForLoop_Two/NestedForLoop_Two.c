#include<stdio.h>
int main()
{
	//variable declaration
	int BA_i, BA_j, k;

	//code
	printf("\n\n");

	for (BA_i = 0; BA_i <= 10; BA_i++)
	{
		printf("BA_i = %d\n", BA_i);
		printf("-----------\n\n");

		for (BA_j = 1; BA_j <= 5; BA_j++)
		{
			printf("BA_j = %d\n", BA_j);
			printf("-----------\n\n");

			for (k = 1; k <= 3; k++)
			{
				printf("\t\tk = %d\n", k);
			}
			printf("\n\n");
		}
	}

	return 0;
}