#include<stdio.h>

#define MAX_NUMBER(a, b) ((a > b) ? a : b)

int main(int argc , char *argv[], char *envp[])
{
	//variable declaration
	int iNum1;
	int iNum2;
	int iresult;

	//code
	printf("\n\n");

	printf("Enter an Integer Number: \n\n");
	scanf("%d", &iNum1);

	printf("\n\n");

	printf("Enter an anothe integer Number : \n\n");
	scanf("%d", &iNum2);

	iresult = MAX_NUMBER(iNum1, iNum2);

	printf("result of Macro Function MAX_NUMBER() = %d\n", iresult);

	printf("\n\n");


}