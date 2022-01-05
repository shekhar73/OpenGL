#include<stdio.h>
struct Demo
{
	int i;
	float f;
	double d;
	char ch;
};

int main()
{

	struct Demo obj;
	//code
	
	printf("Enter a Integer value for data member 'i' of struct Demo:\n");
	scanf("%d", &obj.i);

	printf("Enter a float value for data member 'f' of struct Demo:\n");
	scanf("%f", &obj.f);

	printf("Enter a double value for data member 'd' of struct Demo:\n");
	scanf("%lf", &obj.d);

	printf("Enter a character value for data member 'ch' of struct Demo:\n");
	scanf("%c ", &obj.ch);

	printf("\n");
	printf("Data memeber of struct demo are\n");
	printf("i = %d\n", obj.i);
	printf("f = %f\n", obj.f);
	printf("d = %lf\n", obj.d);
	printf("ch = %c\n", obj.ch);

	return 0;



}