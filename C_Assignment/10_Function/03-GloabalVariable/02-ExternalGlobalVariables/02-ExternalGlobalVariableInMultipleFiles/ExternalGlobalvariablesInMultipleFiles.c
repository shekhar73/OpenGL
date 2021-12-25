#include<stdio.h>

int global_count = 0;
int main(void)
{
	//function prototype

	void change_count(void);
	void chnage_count_one(void); //this function defines in File_01.c
	void change_count_two(void); //this funtion defines in FIle_02.c

	//code
	printf("\n");

	change_count(); //function call
	change_count_one(); //function call
	change_count_two(); //function call

	return 0;
}

void change_count(void)
{
	//code
	global_count = global_count + 1;
	printf("Global Count = %d\n", global_count);
}