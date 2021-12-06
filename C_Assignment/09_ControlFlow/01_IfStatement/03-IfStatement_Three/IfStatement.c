#include <stdio.h>
int main(void)
{
	//variable declarations
	int BA_num;

	//code

	printf("\n\n");
	printf("Enter Value For 'num' : ");
	scanf("%d", &BA_num);

	if (BA_num < 0)
	{
		printf("Num = %d Is Less Than 0 (NEGATIVE).\n\n", BA_num);
	}
	if ((BA_num > 0) && (BA_num <= 100))
	{
		printf("Num = %d Is Between 0 And 100.\n\n", BA_num);
	}
	if ((BA_num > 100) && (BA_num <= 200))
	{
		printf("Num = %d Is Between 100 And 200.\n\n", BA_num);
	}
	if ((BA_num > 200) && (BA_num <= 300))
	{
		printf("Num = %d Is Between 200 And 300.\n\n", BA_num);
	}
	if ((BA_num > 300) && (BA_num <= 400))
	{
		printf("Num = %d Is Between 300 And 400.\n\n", BA_num);
	}
	if ((BA_num > 400) && (BA_num <= 500))
	{
		printf("Num = %d Is Between 400 And 500.\n\n", BA_num);
	}
	if (BA_num > 500)
	{
		printf("Num = %d Is Greater Than 500.\n\n", BA_num);
	}

	return 0;
}