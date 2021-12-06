#include<stdio.h>

int main()
{
	//variable declaration
	int BA_a;
	int BA_b;
	int BA_result;

	//code
	printf("\n\n");
	printf("Enter One Integer :");
	scanf("%d", &BA_a);

	printf("\n\n");
	printf("Enter Another Integer");
	scanf("%d", &BA_b);

	printf("\n\n");
	printf("If Answer = 0, It Is 'FALSE'.\n");
	printf("If Answer = 1, It Is 'TRUE'.\n\n");

	BA_result = (BA_a < BA_b);
	printf("(BA_a < BA_b) A = %d Is Less Than B = %d \t Answer = %d\n", BA_a ,BA_b,BA_result);

	BA_result = (BA_a > BA_b);
	printf("(a > b) A = %d Is Greater Than B = %d \t Answer =%d\n", BA_a, BA_b, BA_result);

	BA_result = (BA_a <= BA_b);
	printf("(a <= b) A = %d Is Less Than or Equal to B = %d \t Answer = %d\n", BA_a , BA_b, BA_result);

	BA_result = (BA_a >= BA_b);
	printf("(a >= b) A = %d Is Greate Than or Equal to b = %d\t Answer = %d\n", BA_a , BA_b, BA_result);

	BA_result = (BA_a == BA_b);
	printf("(a == b) A = %d is Equal To B = %d \t Answer = %d\n", BA_a,BA_b, BA_result);

	BA_result = (BA_a != BA_b);
	printf("(a != b) A = %d is NOT Equal To B = %d \t Answer = %d\n", BA_a , BA_b, BA_result);

	return 0;
}

