#include<stdio.h>
#include<conio.h>

int main()
{
	//variable declaration
	int i;
	char ch;

	//code
	printf("\n\n");

	printf("Printing Even number from 1 to 100 for every input. Exitiing th loop when user Enters character Q or q : \n\n");
	printf("ENter a charachter 'Q' or 'q' TO  exit the loop: \n\n");

	for (i = 1; i <= 100; i++)
	{
		printf("\t%d\n", i);
		ch = getch();
		if (ch == 'Q' || ch == 'q')
		{
			break;
		}
	}

	printf("\n");
	printf("Exiting the loop...");
	printf("\n\n");

	return 0;

}