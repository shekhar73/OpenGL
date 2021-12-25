#include<stdio.h>

int main(int argc, char* argv[], char* envp[])
{
	//function prototype OR function

	void MyAddition(void);
	int MySubtraction(void);
	void MyMultiplication(int, int);
	int MyDivision(int, int);

	//variable declaration
	int result_subtraction;
	int a_multiplication, b_multiplication;
	int a_division, b_division, result_division;

	//code

	//***ADDITION***
	MyAddition();  //function call

	//***SUBTRACTION***
	result_subtraction = MySubtraction(); //function call
	printf("\n\n");
	printf("Subtraction Yields Result = %d\n", result_subtraction);

	//*** MULTIPLICATION ***
	printf("\n\n");
	printf("Enter Integer Value For 'A' For multiplication :");
	scanf("%d", &a_multiplication);

	printf("\n\n");
	printf("Enter Integer value For 'B' For Multiplication :");
	scanf("%d", &b_multiplication);

	MyMultiplication(a_multiplication, b_multiplication);

	//****DIVISION****
	printf("\n\n");
	printf("Enter a Integer Value For 'A' For Division :");
	scanf("%d", &a_division);

	printf("\n\n");
	printf("Enter a Integer Value For 'B' For Division :");
	scanf("%d", &b_division);

	result_division = MyDivision(a_division, b_division); //function call
	printf("\n\n");

	printf("Division Of %d and %d Gives = %d (Quotient)\n", a_division, b_division, result_division);

	printf("\n\n");

	return 0;
}

void MyAddition(void)
{
	int a, b, sum;

	//code
	printf("\n\n");
	printf("Enter a Integer Value For A for Addition :");
	scanf("%d", &a);

	printf("\n\n");
	printf("Enter a Integer Value For B for Addition : ");
	scanf("%d", &b);

	sum = a + b;

	printf("\n\n");
	printf("Sum Of %d And %d = %d\n\n", a, b, sum);
}

int MySubtraction(void)
{
	//variable declaration
	int a, b, subtraction;

	//code
	printf("Enter a number A for Subtraction :  ");
	scanf("%d",&a);

	printf("Enter a number 'B' for subtraction: ");
	scanf("%d", &b);

	subtraction = a - b;

	return subtraction;
}

void MyMultiplication(int a, int b)
{
	//variable declaration

	int multiplication;

	multiplication = a * b;

	printf("\n\n");

	printf("Multiplication of %d and %d = %d\n\n", a, b, multiplication);
}

int MyDivision(int a, int b)
{
	int division_quotient;

	//code
	if (a / b)
	{
		division_quotient = a / b;
	}
	else
	{
		division_quotient = b / a;
	}

	return division_quotient;
}




