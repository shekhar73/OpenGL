#include<stdio.h>
//'stdio.h' contain declaration of 'printf()'

/* calling only two function directly in main , rest of the functions trace thier call indirectly to main*/

int main(int argc, char* argv[], char* envp[])
{
	//function prototype
	void display_information(void);
	void Function_Country(void);

	//code
	display_information();//function call
	Function_Country(); //function call

	return 0;

}

void display_information(void)
{
	//function prototype
	void Function_My(void);
	void Function_Name(void);
	void Function_Is(void);
	void Function_FirstName(void);
	void Function_MiddleName(void);
	void Function_SirName(void);
	void Function_OfAMC(void);

	//function call
	Function_My();
	Function_Name();
	Function_Is();
	Function_FirstName();
	Function_MiddleName();
	Function_SirName();
	Function_OfAMC();

}

void Function_My() //function name
{
	//code
	printf("\n\n");

	printf("My");
}

void Function_Name()
{
	printf("\n\n");

	printf("Name");
}
void Function_Is()
{
	printf("\n\n");

	printf("Is");
}

void Function_FirstName()
{
	printf("\n\n");

	printf("Babasaheb");
}

void Function_MiddleName()
{
	printf("\n\n");

	printf("Haribhau");
}

void Function_SirName()
{
	printf("\n\n");

	printf("Argade");
}

void Function_OfAMC()
{
	printf("\n\n");

	printf("Of ASTROMEDICOMP");

}
void Function_Country(void)
{
	printf("\n\n");

	printf("I Love In India.");

	printf("\n\n");
}