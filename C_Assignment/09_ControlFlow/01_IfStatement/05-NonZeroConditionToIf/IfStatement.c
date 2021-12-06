#include <stdio.h>
int main(void)
{
	//variable declarations
	int BA_a;

	//code
	printf("\n\n");

	BA_a = 5;
	if (BA_a) // Non-zero Positive Value
	{
		printf("if-block 1 : 'A' Exists And Has Value = %d !!!\n\n", BA_a);
	}
	BA_a = -5;
	if (BA_a) // Non-zero Negative Value
	{
		printf("if-block 2 : 'A' Exists And Has Value = %d !!!\n\n", BA_a);
	}
	BA_a = 0;
	if (BA_a) // Zero Value
	{
		printf("if-block 3 : 'A' Exists And Has Value = %d !!!\n\n", BA_a);
	}
	printf("All Three if-statements Are Done !!!\n\n");
	
	return 0;
}