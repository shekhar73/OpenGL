#include<stdio.h>
int main()
{
	//variable declaration
	char option, ch = '\0';

	//code
	printf("\n\n");
	printf("Once the infinite loop is begin, Enter 'Q' or 'q' To quit the infinte loop:\n\n");

	do
	{
		do
		{
			printf("\n");
			printf("In Loop...");
			ch = getch(); // controll flow wait character input
		} while (ch != 'Q' || ch != 'q');

		printf("\n\n");
		printf("Exitting user Controlled infinite loop");
		printf("\n\n");

		printf("DO you want to bigin user controlled infinite loop Again?...(Y/y - yes, any othe key for No)");
		option = getch();
	} while (option == 'Y' || option == 'y');

	return 0;
}