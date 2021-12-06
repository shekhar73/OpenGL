#include <stdio.h>

int main(void)
{
	//variable declarations
	int BA_a = 5;
	int BA_b = 10;

	//code
	printf("\n\n");
	printf("A = %d\n", BA_a);
	printf("A = %d\n", BA_a++);
	printf("A = %d\n", BA_a);
	printf("A = %d\n\n", ++BA_a);

	printf("B = %d\n", BA_b);
	printf("B = %d\n", BA_b--);
	printf("B = %d\n", BA_b);
	printf("B = %d\n\n", --BA_b);

	return 0;
}
