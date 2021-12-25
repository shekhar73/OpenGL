#include<stdio.h>

int main(int argc, char *argv[], char *envp[])
{
	//function prototype
	void Function_Country();

	//code
	Function_Country();

	return 0;
}

void Function_Country()
{
	//function declaration
	void Function_OfAMC(void);

	//code
	Function_OfAMC(); //function call

	printf("\n\n");

	printf("I Love My India");

	printf("\n\n");
}
void Function_OfAMC()
{
	//function declaration
	void Function_Surname(void);

	//code
	Function_Surname();

	printf("\n\n");

	printf("Of Astromedicomp");
}

void Function_Surname()
{
	//function declaration
	void Function_MiddleName(void);

	//code
	Function_MiddleName(); //function call

	printf("\n\n");

	printf("Argade");

}
void Function_MiddleName()
{
	//function declaration
	void Function_Name(void);

	//code
	Function_Name();

	printf("\n\n");

	printf("Haribhau");
}

void Function_Name()
{
	//function declaration
	printf("\n\n");

	printf("Babasaheb");
}