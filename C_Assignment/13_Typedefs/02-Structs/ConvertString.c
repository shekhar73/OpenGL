#include<stdio.h>
void StrCNV(char str[])
{
	int num = 0;
	int i = 0;
	int temp = 0;
	while (i < 3)
	{
		num = (int)str[i];
		temp = (temp * 10) + num ;
		i++;
	}

	printf("%d", temp);
}
int main()
{
	StrCNV("123");
}