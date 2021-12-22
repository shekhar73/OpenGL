#include<stdio.h>
int main()
{
	//variable declaration
	int i, j;

	//code
	printf("\n\n");

	printf("Outer Loop prints Odd number between 1 to 10:");
	printf("Inner Loop print Even number between 1 and 10 for every odd number printed by outer loop");

	for (i = 1; i <= 10; i++)
	{
		if (i % 2 != 0)
		{
			printf("i = %d\n", i);
			printf("--------\n");

			for (j = 1; j <= 10; j++)
			{
				if (j % 2 == 0)
				{
					printf("\tj=%d\n",j);
				}
				else
				{
					continue;
				}
			}
		}
		else
		{
			continue;
		}
	}

	return 0;
}