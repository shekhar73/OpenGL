#include<stdio.h>

int main(int argc, char* argv[], char* envp[])
{
	void MyAddition(void);

	//code
	MyAddition();

	return;
}
void MyAddition(void) //function defination
{
	//variable declaration
	int a, b, sum;

	//code
	printf("\n\n");
	printf("Enter Integer Value For 'A' :");
	scanf("%d", &a);

	printf("\n\n");
	printf("Enter integer value For 'B' :");
	scanf("%d", &b);

	sum = a + b;
	printf("\n\n");

	printf("Sum Of %d And %d = %d\n\n", a, b, sum);
}