#include <stdio.h>

int main(void)
{
	//variable declarations
	int BA_a;
	int BA_b;
	int BA_result;

	//code
	printf("\n\n");
	printf("Enter A Number : ");
	scanf("%d", &BA_a);

	printf("\n\n");
	printf("Enter Another Number : ");
	scanf("%d", &BA_b);

	printf("\n\n");

	// *** The Following Are The 5 Arithmetic Operators +, -, *, / and % ***
	// *** Also, The Resultants Of The Arithmetic Operations In All The Below Five Cases Have Been Assigned To The Variable 'result' Using the Assignment Operator (=) ***
	BA_result = BA_a + BA_b;
	printf("Addition Of A = %d And B = %d Gives %d.\n", BA_a, BA_b, BA_result);

	BA_result = BA_a - BA_b;
	printf("Subtraction Of A = %d And B = %d Gives %d.\n", BA_a, BA_b, BA_result);

	BA_result = BA_a * BA_b;
	printf("Multiplication Of A = %d And B = %d Gives %d.\n", BA_a, BA_b, BA_result);

	BA_result = BA_a / BA_b;
	printf("Division Of A = %d And B = %d Gives Quotient %d.\n",BA_a, BA_b, BA_result);

	BA_result = BA_a % BA_b;
	printf("Division Of A = %d And B = %d Gives Remainder %d.\n", BA_a, BA_b, BA_result);

	printf("\n\n");

	return(0);
}
