#include<stdio.h>
int main()
{
	//variable declaration
	int i, j;

	//code
	printf("\n\n");

	printf("Printing Digit 1 to 10 and 10 to 100: \n\n");
	i = 1;
	j = 10;

	do
	{
		printf("\t%d \t%d \n", i , j);
		i++;
		j = j + 10;
	} while (i <= 10, j <= 100);

	printf("\n\n");

	return 0;
}