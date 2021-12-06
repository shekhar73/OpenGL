#include<stdio.h>

int main(vaid)
{
	int BA_i, BA_j;
	char ch_01, ch_02;
	int BA_a, BA_result_int;
	float BA_f, BA_result_float;

	int BA_i_explicit;
	float BA_f_explicit;

	//code
	printf("\n\n");

	//INTERCONVERSION AND IMPLICIT TYPE-CASTING BETWEEN 'char' AND 'int' TYPES....
	BA_i = 70;
	ch_01 = BA_i;
	printf("I = %d\n",BA_i);
	printf("Character 1 (after ch_01 = i) = %c\n\n", ch_01);

	ch_02 = 'Q';
	BA_j = ch_02;
	printf("Character 2 = %c\n",ch_02);
	printf("J (after j = ch_02) = %d\n\n",BA_j);

	//IMPLICIT CONVERSION OF int TO float ...
	BA_a = 5;
	BA_f = 7.8f;
	BA_result_float = BA_a + BA_f;
	printf("Integer a = %d And Floating-Point Number %f Added Gives Floating-Point Sum = %f\n\n", BA_a, BA_f, BA_result_float);

	BA_result_int = BA_a + BA_f;
	printf("Integer a = %d And Floating-Point Number %f Added Gives Integer-Point Sum = %f\n\n", BA_a, BA_f, BA_result_float);

	//Explicit TYPE CASTING USING CAST OPERATOR...
	BA_f_explicit = 30.121995f;
	BA_i_explicit = (int)BA_f_explicit;
	printf("Floating point number which will be Type Casted Explicitly = %f\n",BA_f_explicit);

	printf("Resultant integer after Explicit Type Casting Of %f = %d\n\n",BA_f_explicit,BA_i_explicit);
	
	return 0;
}