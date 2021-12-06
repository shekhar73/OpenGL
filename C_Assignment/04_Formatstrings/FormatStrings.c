#include <stdio.h>
int main(void)
{
	//code
    printf("\n\n");
    printf("**************************************************************************************");
    printf("\n\n");

    printf("Hello World !!!\n\n");

	int BA_a = 13;
	printf("Integer Decimal Value Of 'BA_a' = %d\n", BA_a);
	printf("Integer Octal Value Of 'BA_a' = %o\n", BA_a);
	printf("Integer Hexadecimal Value Of 'BA_a' (Hexadecimal Letters In Lower Case) = %x\n", BA_a);
	printf("Integer Hexadecimal Value Of 'BA_a' (Hexadecimal Letters In upercase Case) = %X\n\n", BA_a);

	char BA_ch = 'A';
	printf("Character BA_ch = %c\n", BA_ch);
	char BA_str[] = "AstroMediComp's Real Time Rendering Batch";
	printf("String str = %s\n\n", BA_str);

	long BA_num = 30121995L;
	printf("Long Integer = %ld\n\n", BA_num);

	unsigned int BA_b = 7;
	printf("Unsigned Integer 'BA_b' = %u\n\n", BA_b);

	float BA_f_num = 3012.1995f;
	printf("Floating Point Number With Just %%f 'BA_f_num' = %f\n", BA_f_num);
	printf("Floating Point Number With %%4.2f 'BA_f_num' = %4.2f\n", BA_f_num);
	printf("Floating Point Number With %%6.5f 'BA_f_num' = %6.5f\n\n", BA_f_num);

	double BA_d_pi = 3.14159265358979323846;
	printf("Double Precision Floating Point Number Without Exponential = %g\n", BA_d_pi);
	printf("Double Precision Floating Point Number With Exponential (Lower Case) = %e\n", BA_d_pi);
	printf("Double Precision Floating Point Number With Exponential (Upper Case) = %E\n\n", BA_d_pi);
	printf("Double Hexadecimal Value Of 'BA_d_pi' (Hexadecimal Letters In Lower Case) = %a\n", BA_d_pi);
	printf("Double Hexadecimal Value Of 'BA_d_pi' (Hexadecimal Letters In Upper Case) = %A\n\n", BA_d_pi);
    
    printf("**************************************************************************************\n");
    printf("\n\n");
	return(0);
}
