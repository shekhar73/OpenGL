#include<stdio.h>

int main()
{
	//variable declaration

	char BA_option, BA_ch = '\0';

	//code
	printf("\n\n");

	printf("once The infinite Loop Begins Enter 'Q' or 'q' To Quit The Infinite For Loop: \n\n");
	printf("Enter 'Y' or 'y' To Initiate User Controlled Infinite Loop: ");

	printf("\n\n");

	BA_option = getch();

	if (BA_option == 'Y' || BA_option == 'y')
	{
		for (;;)
		{
			printf("In Loop... \n");
			BA_ch = getch();
			if (BA_ch == 'Q' || BA_ch == 'q')
			{
				break; //user controlled Exitting from infinite loop
			}
		}
	}

	printf("\n\n");
	printf("EXITTING USER CONTROLLED INFINITE LOOP...");
	printf("\n\n");
	
	return 0;


}