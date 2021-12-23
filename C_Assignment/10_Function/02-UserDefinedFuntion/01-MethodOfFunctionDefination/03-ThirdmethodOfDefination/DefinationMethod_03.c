#include<stdio.h>

int main(int argc, char *argv[], char *envp[])
{
	//function prototype / declaration / signature
	void MyAddition(int, int);

	//variable declaration : local variable to main()

	int a, b;
	//code
	printf("\n\n");
	printf("Enter integer Value For 'A' :");
	scanf("%d", &a);

	printf("\n\n");
	printf("Enter Integer value For 'B': ");
	scanf("%d", &b);

	MyAddition(a, b);

	return 0;
}
void MyAddition(int a, int b)
{
	int sum;

	sum = a + b;
	printf("\n\n");
	printf("Sum Of %d = %d\n\n", a, b, sum);
}