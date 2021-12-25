#include<stdio.h>

//***Global Scope***
int main(void)
{
	//function prototype
	void change_count(void);

	//variable declaration
	extern int global_count;

	//code
	printf("\n");
	printf("Value of global_count before change_count() = %d\n", global_count);
	change_count();
	printf("Value of global_count after change_count() = %d\n", global_count);
	printf("\n");

	return 0;
}

int global_count = 0;
 
void change_count(void)
{
	global_count = 5;
	printf("Values Of global_Count in change_count() = %d\n", global_count);
}