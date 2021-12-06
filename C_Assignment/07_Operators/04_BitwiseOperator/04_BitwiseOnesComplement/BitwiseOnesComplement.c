#include<stdio.h>
void PrintBinaryFormOfNumber(unsigned int);
int main()
{
	//variable declaration
	unsigned int BA_a;
	unsigned int BA_result;

	//code
	printf("\n\n");
	printf("Enter An Integer = ");
	scanf("%u", &BA_a);

	printf("\n\n");
	printf("\n\n");

	BA_result = ~BA_a;
	printf("Bitwise COMPLEMENTING of \nA = %d (Decimal) gives result % d(Decimal).\n\n", BA_a, BA_result);

	PrintBinaryFormOfNumber(BA_a);
	PrintBinaryFormOfNumber(BA_result);

	return 0;
}

void PrintBinaryFormOfNumber(unsigned int decimal_number)
{
	//variable declaration
	unsigned int BA_quotient, BA_remainder;
	unsigned int BA_num;
	unsigned int binary_array[8];
	int BA_i;

	//code
	for (BA_i = 0; BA_i < 8; BA_i++)
	{
		binary_array[BA_i] = 0;
	}
	printf("The Binary Form Of The Decimal Integer %d Is\t=\t", decimal_number);
	BA_num = decimal_number;
	BA_i = 7;
	while (BA_num != 0)
	{
		BA_quotient = BA_num / 2;
		BA_remainder = BA_num % 2;
		binary_array[BA_i] = BA_remainder;
		BA_num = BA_quotient;
		BA_i--;
	}

	for (BA_i = 0; BA_i < 8; BA_i++)
	{
		printf("%u", binary_array[BA_i]);
	}

	printf("\n\n");
}