#include<stdio.h>
int main()
{
	//variable declaration

	char option, ch = '\0';

	//code
	printf("\n\n");
	printf("Once The infinite Loop Begins, Enter 'Q' or 'q' to quit the infinite loop: \n\n ");

	printf("Enter 'Y' or 'y' To initiate user Controlled infinite Loop:");
	printf("\n\n");

	option = getch();

	if (option == 'y' || option == 'Y')
	{
		do
		{
			printf("In Loop....\n");
			ch = getch();
			if (ch == 'Q' || ch == 'q')
			{
				break;
			}
		} while (1);

		printf("\n\n");
		printf("Exitting user Controlled infinite loop...");
		printf("\n\n");
	}
	else
	{
		printf("You must press 'Y' or 'y' initiate The User Controlled Infinite Loop... Please try again...\n\n");
	}

	return 0;
}