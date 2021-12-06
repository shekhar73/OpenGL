#include <stdio.h>

int main(void)
{
	//variable declarations
	int BA_a;
	int BA_b;
	int BA_x;

	//code
	printf("\n\n");
	printf("Enter A Number : ");
	scanf("%d", &BA_a);

	printf("\n\n");
	printf("Enter Another Number : ");
	scanf("%d", &BA_b);

	printf("\n\n");

	//Since, In All The Following 5 Cases, The Operand on The Left 'BA_a' Is Getting Repeated Immeiately On The Right (e.g : BA_a = BA_a + BA_b or BA_a = BA_a -BA_b),
	//We Are Using Compound Assignment Operators +=, -=, *=, /= and %=

	//Since, 'BA_a' Will Be Assigned The Value Of (BA_a + BA_b) At The Expression (BA_a += BA_b), We Must Save The Original Value Of 'BA_a' To Another Variable (BA_x)
	BA_x = BA_a;
	BA_a += BA_b; // BA_a = BA_a + BA_b
	printf("Addition Of A = %d And B = %d Gives %d.\n", BA_x, BA_b, BA_a);

	//Value Of 'BA_a' Altered In The Above Expression Is Used Here...
	//Since, 'BA_a' Will Be Assigned The Value Of (BA_a - BA_b) At The Expression (BA_a -= BA_b), We Must Save The Original Value Of 'BA_a' To Another Variable (BA_x)
	BA_x = BA_a;
	BA_a -= BA_b; // BA_a = BA_a - BA_b
	printf("Subtraction Of A = %d And B = %d Gives %d.\n", BA_x, BA_b, BA_a);

	//Value Of 'BA_a' Altered In The Above Expression Is Used Here...
	//Since, 'BA_a' Will Be Assigned The Value Of (BA_a * BA_b) At The Expression (BA_a *= BA_b), We Must Save The Original Value Of 'BA_a' To Another Variable (BA_x)
	BA_x = BA_a;
	BA_a *= BA_b; // BA_a = BA_a * BA_b
	printf("Multiplication Of A = %d And B = %d Gives %d.\n", BA_x, BA_b, BA_a);

	//Value Of 'BA_a' Altered In The Above Expression Is Used Here...
	//Since, 'BA_a' Will Be Assigned The Value Of (BA_a / BA_b) At The Expression (BA_a /= BA_b), We Must Save The Original Value Of 'BA_a' To Another Variable (BA_x)
	BA_x = BA_a;
	BA_a /= BA_b; // BA_a = BA_a / BA_b 
	printf("Division Of A = %d And B = %d Gives Quotient %d.\n", BA_x, BA_b, BA_a);

	//Value Of 'BA_a' Altered In The Above Expression Is Used Here...
	//Since, 'BA_a' Will Be Assigned The Value Of (a % b) At The Expression (BA_a %= BA_b), We Must Save The Original Value Of 'BA_a' To Another Variable (BA_x)
	BA_x = BA_a;
	BA_a %= BA_b; // BA_a = BA_a % BA_b
	printf("Division Of A = %d And B = %d Gives Remainder %d.\n", BA_x, BA_b, BA_a);

	printf("\n\n");

	return(0);
}
