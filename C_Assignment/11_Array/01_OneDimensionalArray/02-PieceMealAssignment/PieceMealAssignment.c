#include<stdio.h>

int main(void)
{
	//variable declaration
	int iArrayOne[10];
	int iArraytwo[10];
	int i;
	
	iArrayOne[0] = 3;
	iArrayOne[1] = 6;
	iArrayOne[2] = 9;
	iArrayOne[3] = 12;
	iArrayOne[4] = 15;
	iArrayOne[5] = 18;
	iArrayOne[6] = 21;
	iArrayOne[7] = 24;
	iArrayOne[8] = 27;
	iArrayOne[9] = 30;

	printf("\n\n");
	printf("Piece-meal (Hard - Coded) Assignment And Display Of Elements to Array 'iArrayOne[]': \n\n");

	printf("1st Element Of Array 'iArrayone[]' or Element at 0th index of array 'iArrayOne[]' = %d\n", iArrayOne[0]);
	printf("2nd Element Of Array 'iArrayone[]' or Element at 1th index of array 'iArrayOne[]' = %d\n", iArrayOne[1]);
	printf("3rd Element Of Array 'iArrayone[]' or Element at 2th index of array 'iArrayOne[]' = %d\n", iArrayOne[2]);
	printf("4th Element Of Array 'iArrayone[]' or Element at 3th index of array 'iArrayOne[]' = %d\n", iArrayOne[3]);
	printf("5th Element Of Array 'iArrayone[]' or Element at 4th index of array 'iArrayOne[]' = %d\n", iArrayOne[4]);
	printf("6th Element Of Array 'iArrayone[]' or Element at 5th index of array 'iArrayOne[]' = %d\n", iArrayOne[5]);
	printf("7th Element Of Array 'iArrayone[]' or Element at 6th index of array 'iArrayOne[]' = %d\n", iArrayOne[6]);
	printf("8th Element Of Array 'iArrayone[]' or Element at 7th index of array 'iArrayOne[]' = %d\n", iArrayOne[7]);
	printf("9th Element Of Array 'iArrayone[]' or Element at 8th index of array 'iArrayOne[]' = %d\n", iArrayOne[8]);
	printf("10th Element Of Array 'iArrayone[]' or Element at 9th index of array 'iArrayOne[]' = %d\n", iArrayOne[9]);

	printf("\n\n");
	printf("Enter 1st Element Of  Array 'iArraytwo[]' :");
	scanf("%d", &iArraytwo[0]);

	printf("Enter 2nd Element Of  Array 'iArraytwo[]' :");
	scanf("%d", &iArraytwo[1]);

	printf("Enter 3rd Element Of  Array 'iArraytwo[]' :");
	scanf("%d", &iArraytwo[2]);

	printf("Enter 4th Element Of  Array 'iArraytwo[]' :");
	scanf("%d", &iArraytwo[3]);

	printf("Enter 5th Element Of  Array 'iArraytwo[]' :");
	scanf("%d", &iArraytwo[4]);

	printf("Enter 6th Element Of  Array 'iArraytwo[]' :");
	scanf("%d", &iArraytwo[5]);

	printf("Enter 7th Element Of  Array 'iArraytwo[]' :");
	scanf("%d", &iArraytwo[6]);

	printf("Enter 8th Element Of  Array 'iArraytwo[]' :");
	scanf("%d", &iArraytwo[7]);

	printf("Enter 9th Element Of  Array 'iArraytwo[]' :");
	scanf("%d", &iArraytwo[8]);

	printf("Enter 10th Element Of  Array 'iArraytwo[]' :");
	scanf("%d", &iArraytwo[9]);


	for (i = 0; i < (sizeof(iArraytwo) / sizeof(int)); i++)
	{
		printf("Element of Array : %d = %d\n", i + 1, iArraytwo[i]);
	}

	return 0;
}