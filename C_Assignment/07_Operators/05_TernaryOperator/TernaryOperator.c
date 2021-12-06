#include<stdio.h>

int main(void)
{
	int BA_a, BA_b;
	int BA_p, BA_q;
	char BA_ch_result_01, BA_ch_result_02;
	int BA_i_result_01, BA_i_result_02;

	//code
	printf("\n\n");


	BA_a = 7;
	BA_b = 5;
	BA_ch_result_01 = (BA_a > BA_b) ? 'A' : 'B';
	BA_i_result_01 = (BA_a > BA_b) ? BA_a : BA_b;
	printf("Ternary Operator Answer 1 -----%c and %d .\n\n",BA_ch_result_01, BA_i_result_01);

	BA_p = 30;
	BA_q = 30;
	BA_ch_result_02 = (BA_p != BA_q) ? 'P' : 'Q';
	BA_i_result_02 = (BA_p != BA_q) ? BA_p : BA_q;
	printf("Ternary Operator Answer 2 ----- %c and %d.\n\n", BA_ch_result_02, BA_i_result_02);
	printf("\n\n");
	return(0);


}