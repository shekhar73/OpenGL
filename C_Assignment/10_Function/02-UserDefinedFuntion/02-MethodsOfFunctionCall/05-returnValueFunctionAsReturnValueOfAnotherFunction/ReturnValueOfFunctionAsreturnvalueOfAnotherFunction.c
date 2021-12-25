#include<stdio.h>

int main(int argc, char* argv[], char* envp[])
{
	//function prototype
	int MyAddition(int, int);

	//variable declarations
	int r;

	int iNum1, iNum2;

	//code
	printf("\n\n");
	iNum1 = 10;
	iNum2 = 20;
	printf("%d + %d = %d\n", iNum1, iNum2, MyAddition(iNum1, iNum2));

	printf("\n\n");

	return 0;
}

int MyAddition(int a, int b)
{
	int Add(int, int);

	//code
	return(Add(a, b));
}

int Add(int x, int y)
{
	//code
	return (x + y);
}