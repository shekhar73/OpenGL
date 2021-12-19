#include<stdio.h>

int main()
{
	//varaible declaration
	int BA_i, BA_j, c;

	//code
	printf("\n\n");

	for (BA_i = 0; BA_i < 64; BA_i++)
	{
		for (BA_j = 0; BA_j < 64; BA_j++)
		{
			c = ((BA_i & 0x8) == 0) ^ ((BA_j & 0x8) == 0);

			if (c == 0)
			{
				printf("  ");
			}
			if (c == 1)
			{
				printf("* ");
			}
		}
		printf("\n\n");
	}

	return 0;
}