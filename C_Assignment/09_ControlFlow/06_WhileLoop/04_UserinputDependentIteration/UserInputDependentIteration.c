#include<stdio.h>
int main(void)
{
	int i_num, num, i;

	//code
	printf("\n\n");

	printf("Enter An integer Value from which Iteration Must Begin :");
	scanf("%d", &i_num);

	printf("How many Digits Do you want to print From %d onwords ? :", i_num);
	scanf("%d",&num);

	printf("Printing Digit %d to %d :\n\n", i_num, (i_num + num));

	i = i_num;

	while (i <= (i_num + num))
	{
		printf("\t%d\n", i);
		i++;
	}

	printf("\n\n");

	return 0;


}