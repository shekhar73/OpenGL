#include<stdio.h>

void change_count_two(void)
{
	extern int global_count;
	global_count = global_count + 1;
	printf("change_count_two() : value of global count in file_02 = %d\n", global_count);
}