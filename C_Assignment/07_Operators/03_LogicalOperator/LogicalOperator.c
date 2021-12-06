#include<stdio.h>

int main(void)
{
	//variable declaration
	int BA_a;
	int BA_b;
	int BA_c;
	int BA_result;

	//code
	printf("\n\n");
	printf("Enter First Integer: ");
	scanf("%d", &BA_a);

	printf("\n\n");
	printf("Enter a second Integer");
	scanf("%d", &BA_b);

	printf("\n\n");
	printf("Enter Third Integer");
	scanf("%d",&BA_c);

	printf("\n\n");
	printf("If Answer = 0, It Is 'FALSE'.\n");
	printf("If Answer = 1, It is 'TRUE'.\n");

	BA_result = (BA_a <= BA_b) && (BA_b != BA_c);
	printf("LOGICAL AND(&&): Answer is TRUE (1) if and only if BOTH conditions Are True. The Answer is False (0) if Any One Or Both Conditions Are False.\n\n");
	printf("BA_A = %d is Less than or Equal to BA_b = %d AND BA_b = %d is not equal to C = %d \t Answer = %d\n\n", BA_a,BA_b, BA_b, BA_c,BA_result);

	BA_result = (BA_b >= BA_a) || (BA_a == BA_c);
	printf("LOGICAL OR(||):Answer is FALSE(1) if an only if both the condition are False. The Answer is TRUE (1) if ANy one Or Both the condition are ture.\n ");
	printf("Either BA_b = %d is Greater than or equal to BA_a = %d OR BA_a = %d Is Equal To BA_C = %d \t Answer = %d\n\n", BA_b,BA_a,BA_a,BA_c,BA_result);

	BA_result = !BA_a;
	printf("BA_a = %d And Using Logical NOT (!) Operator on A Gives Result = %d\n\n",BA_a,BA_result);

	BA_result = !BA_b;
	printf("BA_b = %d And Using Logical NOT(!) operator on A Gives result = %d\n\n",BA_b,BA_result);

	BA_result = !BA_c;
	printf("BA_c = %d And using Logical NOT(!) Operator on a Gives result = %d\n\n",BA_c,BA_result);

	BA_result = (!(BA_a <= BA_b) && !(BA_b != BA_c));
	printf("Using Logical NOT (!) On (BA_a <= BA_b) And Also On (BA_b != BA_c) And then AN Them Afterwards Gives Result = %d\n", BA_result);

	printf("\n\n");

	BA_result = !((BA_b >= BA_a) || (BA_a == BA_c));
	printf("Using Logical NOT (!) On Entire Logical Expression (BA_b >= BA_a) || (BA_a == BA_c) Gives result = %d\n", BA_result);
	printf("\n\n");

	return 0;
}