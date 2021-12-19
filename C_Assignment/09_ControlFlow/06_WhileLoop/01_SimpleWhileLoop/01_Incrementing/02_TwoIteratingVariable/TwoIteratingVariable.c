#include<stdio.h>
int main()
{
	//variable declaration
	int i, j;

	//code

	printf("\n\n");

	printf("Enter Digits 1 to 10 and 10 to 100");
	i = 1;
	j = 10;
	while (i <= 10, j <= 100)
	{
		printf("\t %d \t %d\n", i, j);
		i++;
		j = j + 10;
	}
	printf("\n");

	return 0;
}