#include<stdio.h>

int main(void)
{
	//variable declaration

	//a is local variable. It is Local to main() only.
	int a = 5;

	//funtion prototype
	void change_count(void);

	//code
	printf("\n");
	printf("A = %d\n\n", a);

	//local_count is initialized to 0
	//local_count = local_count + 1 = 0 + 1 = 1;

	change_count();
	
	change_count();

	change_count();

	return 0;

}

void change_count()
{
	int local_count = 0;

	local_count = local_count + 1;

	printf("Local Count = %d\n", local_count);
}