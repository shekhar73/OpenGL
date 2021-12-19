#include<stdio.h>
int main()
{
	//variable declration
	int i, j, k;

	//code
	printf("\n\n");

	i = 1;
	
	while (i <= 10)
	{
		printf("i = %d\n", i );
		printf("-------------\n\n");
		j = 1;
		while (j <= 5)
		{
			printf("j = %d\n", j);
			printf("-------------\n\n");

			k = 1;
			while (k <= 3)
			{
				printf("k = %d\n", k);
				printf("-------------\n\n");
				k++;
			}
			j++;
		}
		printf("\n\n");
		i++;
	}

	return 0;
}