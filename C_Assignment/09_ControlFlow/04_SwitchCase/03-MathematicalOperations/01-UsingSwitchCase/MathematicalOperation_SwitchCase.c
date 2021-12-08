#include<stdio.h>
#include<conio.h>

int main()
{
	//variable declaration
	int BA_a, BA_b;
	int BA_Result;

	char BA_option, BA_option_division;

	//code
	printf("\n\n");

	printf("Enter a value for A: ");
	scanf("%d", &BA_a);

	printf("Enter a value for B: ");
	scanf("%d", &BA_b);

	printf("Enter option In character : \n\n");
	printf("'A' or 'a' For Addition: \n");
	printf("'S' or 's' For subtraction: \n");
	printf("'M' or 'm' For Multiplication \n");
	printf("'D' or 'd' For Division \n");

	printf("Enter option");
	BA_option = getch();

	printf("\n\n");

	switch (BA_option)
	{
	case 'A':
	case 'a':
		BA_Result = BA_a + BA_b;
		printf("Addition of A = %d and B = %d Gives result %d !!!\n\n",BA_a,BA_b,BA_Result);
		break;
		
	case 'S':
	case 's':
		if (BA_a >= BA_b)
		{
			BA_Result = BA_a - BA_b;
			printf("Subtraction of A = %d and B = %d Gives result %d !!!\n\n", BA_a, BA_b, BA_Result);
			break;
		}
		else
		{
			BA_Result =  BA_b - BA_a;
			printf("Subtraction of A = %d and B = %d Gives result %d !!!\n\n", BA_a, BA_b, BA_Result);
			break;
		}

	case 'M':
	case 'm':
		BA_Result = BA_a * BA_b;
		printf("Multiplication Of A = %d And B = %d Gives Result %d !!!\n\n", BA_a, BA_b, BA_Result);
		break;

	case 'D':
	case 'd':
		printf("Enter Option In Character : \n\n");
		printf("'Q' or 'q' or '/' For Quotient Upon Division : \n");
		printf("'R' or 'r' or '%%' For Remainder Upon Division : \n");
		printf("Enter Option : ");
		BA_option_division = getch();
		printf("\n\n");
		switch (BA_option_division)
		{
		case 'Q':
		case 'q':
		case '/':
			if (BA_a >= BA_b)
			{
				BA_Result = BA_a / BA_b;
				printf("Division Of A = %d By B = %d Gives Quotient = %d !!!\n\n", BA_a, BA_b, BA_Result);
			}
			else
			{
				BA_Result =  BA_b / BA_a  ;
				printf("Division Of B = %d By A = %d Gives Quotient = %d !!!\n\n", BA_b, BA_a, BA_Result);
			}
			break; // 'break' of case 'Q' or case 'q' or case '/'

		case 'R':
		case 'r':
		case '%':
			if (BA_a >= BA_b)
			{
				BA_Result = BA_a % BA_b;
				printf("Divition of A = %d BY B = % d Gives Quotient = %d !!!\n", BA_a,BA_b,BA_Result);
			}
			else
			{
				BA_Result =  BA_b % BA_a;
				printf("Divition of A = %d BY B = % d Gives Quotient = %d !!!\n", BA_a, BA_b, BA_Result);
			}
		default: // 'default' case for switch(option_division)
			printf("Invalid Character %c Entered For Division !!! Please Try Again...\n\n", BA_option_division);
			break; // 'break' of 'default' of switch(option_division)
		}
		break;

	default:
		printf("Invalid Character %c Entered !!! Please Try Again...\n\n",BA_option);
		break;
	}

	printf("Switch Case Block Complete !!!\n");

	return 0;
}