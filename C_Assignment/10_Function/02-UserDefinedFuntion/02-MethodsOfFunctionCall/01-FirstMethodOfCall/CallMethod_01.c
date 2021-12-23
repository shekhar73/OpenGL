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
