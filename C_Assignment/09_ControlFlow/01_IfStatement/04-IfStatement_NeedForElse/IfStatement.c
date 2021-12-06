#include <stdio.h>
int main(void)
{
	//variable declarations
	int BA_age;
	
	//code
	printf("\n\n");
	printf("Enter Age : ");
	scanf("%d", &BA_age);
	if (BA_age >= 18)
	{
		printf("You Are Eligible For Voting !!!\n\n");
	}

	printf("You Are NOT Eligible For Voting !!!\n\n");

	return 0;
}
