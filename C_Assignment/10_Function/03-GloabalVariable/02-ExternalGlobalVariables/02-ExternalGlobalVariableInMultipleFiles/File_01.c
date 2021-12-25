#include<stdio.h>
extern int global_count;

void chnage_count_one(void)
{
	global_count = global_count + 1;
	printf("change_count_one(): value Of global_count in File_01 = %d\n", global_count);
}
