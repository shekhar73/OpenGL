#include<stdio.h>
#include<conio.h>

int main()
{
	//variable declaration
	int i, j;

	printf("\n\n");

	for (i = 1; i <= 20; i++)
	{
		for (j = 1; j <= 20; j++)
		{
			if (j > 1)
			{
				break;
			}
			else
			{
				printf("* ");
			}
		}
		printf("\n");
	}

	printf("\n\n");

	return 0;
}