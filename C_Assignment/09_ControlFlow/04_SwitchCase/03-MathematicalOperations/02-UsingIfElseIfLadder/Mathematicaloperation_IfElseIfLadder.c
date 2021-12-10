#include<stdio.h>
#include<conio.h>

int main()
{
	//variable declaration
	int BA_a, BA_b;
	int BA_result;

	char BA_option, BA_option_division;

	//code
	printf("\n\n");

	printf("Enter a value for 'A' : ");
	scanf("%d", &BA_a);

	printf("Enter a value for 'B' :");
	scanf("%d",&BA_b);

	printf("Enter Option In Character : \n\n");
	printf("'A' or 'a' For Addition : \n");
	printf("'S' or 's' For Subtraction : \n");
	printf("'M' or 'm' For Multiplication : \n");
	printf("'D' or 'd' For Division : \n\n");

	printf("Enter Option :");
	BA_option = getch();

	printf("\n\n");

	if (BA_option == 'A' || BA_option == 'a')
	{
		BA_result = BA_a + BA_b;
		printf("Addition Of A = %d And B = %d Gives Result %d !!!\n\n", BA_a, BA_b,
			BA_result);
	}
	else if (BA_option == 'S' || BA_option == 's')
	{
		if (BA_a >= BA_b)
		{
			BA_result = BA_a - BA_b;
			printf("Subtraction Of B = %d From A = %d Gives result %d !!!\n\n ",BA_b, BA_a, BA_result);
		}
		else
		{
			BA_result = BA_b - BA_a;
			printf("Subtraction Of A = %d From B = %d Gives Result %d !!!\n\n",BA_a, BA_b, BA_result);
		}
	}
	else if (BA_option == 'M' || BA_option == 'm')
	{
		BA_result = BA_a * BA_b;
		printf("Multiplication of A = %d And B = %d Gives Result %d !!!\n\n",BA_a, BA_b, BA_result);
	}
	else if (BA_option == 'D' || BA_option == 'd')
	{
		printf("Enter Option In Character : \n\n");
		printf("'Q' or 'q' or '/' For Quotient Upon Division : \n");
		printf("'R' or 'r' or '%%' For Remainder Upon Division : \n");

		printf("Enter Option :");
		BA_option_division = getch();

		printf("\n\n");

		if (BA_option_division == 'Q' || BA_option_division == 'q' || BA_option_division == '/')
		{
			if (BA_a >= BA_b)
			{
				BA_result = BA_a / BA_b;
				printf("Division Of A = %d By B = %d Gives Quotient = %d !!!\n\n", BA_a, BA_b, BA_result);
			}
			else
			{
				BA_result = BA_a / BA_b;
				printf("Division Of B = %d By B = %d Gives Quotient = %d !!!\n\n", BA_b, BA_a, BA_result);
			}
		}
		else if (BA_option_division == 'R' || BA_option_division == 'r' || BA_option_division == '%')
		{
			if (BA_a >= BA_b)
			{
				BA_result = BA_a % BA_b;
				printf("Divition Of A = % d By B = % d Gives remainder = % d !!!\n", BA_a, BA_b, BA_result);
			}
			else
			{
				BA_result = BA_b % BA_a;
				printf("Division of B = %d By A = %d Gives Remainder = %d !!!\n\n", BA_b, BA_a, BA_result);
			}
		}
		else
		{
			printf("Invalid Character %c Entered For Division !!! Please Try Again...\n\n", BA_option_division);
		}
	}
	else
	{
		printf("Invalid Character %c Entered !!! Please try again... \n\n",BA_option);
	}
	
	printf("If - Else If - Else Ladder Complete !!!\n");
	return 0;
}