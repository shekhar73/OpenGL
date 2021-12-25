#include<stdio.h>

int main(void)
{
	//variable declaration
	int a = 5;

	//function prototype
	void change_count(void);

	//code
	printf("\n");
	printf("A = %d\n\n", a);

	change_count();

	change_count();

	change_count();

	return 0;

}

void change_count(void)
{
	static int local_count = 0;

	//code

	local_count = local_count + 1;

	printf("Local Count = %d\n", local_count);
}