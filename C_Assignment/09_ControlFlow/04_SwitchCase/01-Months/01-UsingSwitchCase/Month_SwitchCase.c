#include<stdio.h>
int main()
{
	int BA_num_month;

	//code
	printf("\n\n");

	printf("Enter a number of month (1 to 12) :");
	scanf("%d",&BA_num_month);

	printf("\n\n");

	switch (BA_num_month)
	{
	case 1:
		printf("Month number %d Is January !!!\n\n",BA_num_month);
		break;

	case 2:
		printf("Month number %d Is FEBRUARY !!!\n\n",BA_num_month);
		break;

	case 3:
		printf("Month Number %d Is MARCH !!!\n\n",BA_num_month);
		break;

	case 4:
		printf("Month Number %d  Is APRIL !!!\n\n",BA_num_month );
		break;

	case 5:
		printf("Month Number %d  Is MAY !!!\n\n", BA_num_month);
		break;

	case 6:
		printf("Month Number %d  Is JUNE !!!\n\n", BA_num_month);
		break;

	case 7:
		printf("Month Number %d  Is JULLY !!!\n\n", BA_num_month);
		break;

	case 8:
		printf("Month Number %d  Is AUGUST !!!\n\n", BA_num_month);
		break;

	case 9:
		printf("Month Number %d  Is SEPTEBER !!!\n\n", BA_num_month);
		break;

	case 10:
		printf("Month Number %d  Is OCTOBER !!!\n\n", BA_num_month);
		break;

	case 11:
		printf("Month Number %d  Is NOVEMBER !!!\n\n", BA_num_month);
		break;

	case 12:
		printf("Month Number %d  Is DECEMBER !!!\n\n", BA_num_month);
		break;
	default:
		printf("Invalid Month Number %d Entered !!! Please Try Again...\n\n", BA_num_month);
		break;
	}

	printf("Switch case block complete !!!\n");

	return 0;
}