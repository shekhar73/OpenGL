#include<stdio.h>

int main()
{
	//variable declration
	int BA_age;

	//code
	printf("\n\n");

	printf("Enter Age : ");
	scanf("%d", &BA_age);

	if(BA_age >= 18)
	{
		printf("You are Eligible for waiting !!!\n\n");
	}

	return 0;
}