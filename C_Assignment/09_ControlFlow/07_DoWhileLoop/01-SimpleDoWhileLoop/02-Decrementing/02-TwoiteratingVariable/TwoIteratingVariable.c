#include<stdio.h>
int main()
{
	//variable declaration
	int i, j;

	//code

	printf("Printing Digit 10 to 1 and 1 to 100\n\n");

	i = 10;
	j = 100;

	do
	{
		printf("\t %d\t %d \n ", i, j);
		i--;
		j = j - 10;
	} while (i >= 0, j >= 10);

	
	printf("\n\n");
	return 0;

}