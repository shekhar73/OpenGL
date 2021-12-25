#include<stdio.h>

int main(int argc, char* argv[], char* envp[])
{
	//function prototype OR declaration
	int MyAddition(int, int);

	//variable declaration
	int r;
	int iNum1, iNum2;
	int iNum3, iNum4;

	//code
	iNum1 = 10;
	iNum2 = 20;
	iNum3 = 30;
	iNum4 = 40;

	r = MyAddition(MyAddition(iNum1, iNum2), MyAddition(iNum3, iNum4));
	//return value of my addition() is sent as parameter to another call to MyAdditon()

	printf("\n\n");

	printf("%d + %d + %d + %d = %d\n", iNum1, iNum2, iNum3, iNum4, r);

	return 0;

}

int MyAddition(int a, int b)
{
	//variable declaration
	int sum;

	//code
	sum = a + b;

	return sum;
}