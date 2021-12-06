#include<stdio.h>
int main()
{
	int BA_num;

	//code
	printf("\n\n");

	printf("Enter a value for num :");
	scanf("%d",&BA_num);

	if (BA_num < 0)
	{
		printf("Num = %d Is less than 0 (NEGATIVE !!!\n\n)",BA_num);
	}
	else
	{
		if ((BA_num > 0) && (BA_num <= 100))
		{
			printf("Num = %d Is Between 0 And 100 !!!\n\n", BA_num);
		}
		else
		{
			if ((BA_num > 100) && (BA_num <= 200)) 
			{
				printf("Num = %d Is Between 100 And 200 !!!\n\n", BA_num);
			}
			else
			{
				if ((BA_num > 200) && (BA_num <= 300))
				{
					printf("Num = %d Is Between 200 And 300 !!!\n\n", BA_num);
				}
				else
				{
					if ((BA_num > 300) && (BA_num <= 400)) // 'if' - 05
					{
						printf("Num = %d Is Between 300 And 400 !!!\n\n", BA_num);
					}
					else
					{
						if ((BA_num > 400) && (BA_num <= 500)) // 'if' - 06
						{
							printf("Num = %d Is Between 400 And 500 !!!\n\n",
								BA_num);
						}
						else // 'else' - 06
						{
							printf("Num = %d Is Greater Than 500 !!!\n\n", BA_num);
						}
					}
				}
			}
		}
	}

	return 0;
}