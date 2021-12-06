#include <stdio.h>

int main(void)
{

    // variable declarations
    int BA_i = 5;
    float BA_f = 3.9f;
    double BA_d = 8.041997;
    char BA_c = 'A';
    
	//code
    printf("\n\n");
    
    printf("BA_i = %d\n", BA_i);
    printf("BA_f = %f\n", BA_f);
    printf("BA_d = %lf\n", BA_d);
    printf("BA_c = %c\n", BA_c);

    printf("\n\n");

    BA_i = 43;
    BA_f = 6.54f;
    BA_d = 26.1294;
    BA_c = 'P';
    
    printf("BA_i = %d\n", BA_i);
    printf("BA_f = %f\n", BA_f);
    printf("BA_d = %lf\n", BA_d);
    printf("BA_c = %c\n", BA_c);
    printf("\n\n");

    return 0;
}



