#include<stdio.h>
int main()
{
	//variable declaration
	int i_num, num , i;

	//code
	printf("\n\n");

	printf("Enter an integer Value from which Iteration Must begin :");
	scanf("%d", &i_num);

	printf("How many Digit Do you Want to print From %d onwords ?:", i_num);
	scanf("%d", &num);

	printf("printing Digit %d to %d :\n\n", i_num, (i_num + num));

	i = i_num;

	do
	{
		printf("\t %d\n", i);
		i++;
	} while (i <= (i_num + num));

	printf("\n\n");
	return 0;

}