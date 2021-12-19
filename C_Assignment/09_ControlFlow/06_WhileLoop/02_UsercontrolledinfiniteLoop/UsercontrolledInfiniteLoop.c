#include<stdio.h>

int main()
{
	//variable declaration
	char BA_option, BA_ch = '\0';

	//code
	printf("\n\n");

	printf("Once infinite loop is begins , Enter 'Q or 'q' To Quit The Infinite For Loop: \n\n");
	printf("Enter 'Y' or 'y' TO initiliaze User Controlled Infinite Loop :");
	printf("\n\n");

	BA_option = getch();

	if (BA_option == 'Y' || BA_option == 'y')
	{
		while (1)
		{
			printf("In Loop ...\n");
			BA_ch = getch();
			if (BA_ch == 'Q' || BA_ch == 'q')
			{
				break; //User Controlled Exiting from Infinite Loop
			}
		}

		printf("\n\n");
		printf("Exiting user controlled infinite loop ...");
		printf("\n\n");

	}
	else
	{
		printf("You must Press 'Y' or 'y' To initiate The user Controlled infinite Loop...Please Try Again...\n\n");
	}

	return 0;
}