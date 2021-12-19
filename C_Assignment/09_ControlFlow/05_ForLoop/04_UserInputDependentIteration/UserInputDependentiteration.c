#include<stdio.h>

int main()
{
	//variable declaration
	int i_num, num, BA_i;

	//code
	printf("\n\n");

	printf("Enter An integer Value From which Iteration Must Begin :");
	scanf("%d",&i_num);

	printf("How Many digit Do you want to print From %d Onwards ? :", i_num);
	scanf("%d", &num);

	printf("Printing digit %d to %d : \n\n", i_num, (i_num + num));

	for (BA_i = i_num; BA_i <= (i_num + num); BA_i++)
	{
		printf("\t%d\t",BA_i);
	}

	printf("\n\n");

	return 0;
}