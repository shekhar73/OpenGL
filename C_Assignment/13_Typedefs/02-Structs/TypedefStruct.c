#include<stdio.h>

#define MAX_NAME_LENGTH 100

struct EmployeeData
{
	char name[MAX_NAME_LENGTH];
	unsigned int age;
	char gender;
	double sal;
};

struct MyStruct
{
	int i;
	float f;
	double d;
	char c;
};

int main()
{
	typedef struct EmployeeData MY_EMPLOYEE_TYPE;
	typedef struct MyStruct MY_DATA_TYPE;

	struct EmployeeData objemp = { "Baba", 25, 'M', 10000.00 };
	MY_EMPLOYEE_TYPE objEmptype = { "Argade", 13, 'F', 20000.00 };

	struct MyStruct objMystruct = { 10, 10.0f, 10.9999, 'S' };
	MY_DATA_TYPE MyDataObj;

	MyDataObj.i = 10;
	MyDataObj.d = 10.0987;
	MyDataObj.f = 20.6f;
	MyDataObj.c = 'x';

	printf("\n\n");
	printf("objemp.name = %s\n", objemp.name);
	printf("objemp.age= %d\n", objemp.age);
	printf("objemp.gender = %c\n", objemp.gender);
	printf("objemp.sal= %lf\n", objemp.sal);

	printf("\n\n");
	printf("objEmptype.name = %s\n", objEmptype.name);
	printf("objEmptype.age= %d\n", objEmptype.age);
	printf("objEmptype.gender = %c\n", objEmptype.gender);
	printf("objEmptype.sal= %lf\n", objEmptype.sal);

	printf("\n\n");
	printf("objMystruct.i = %d\n", objMystruct.i);
	printf("objMystruct.f= %f\n", objMystruct.f);
	printf("objMystruct.d = %lf\n", objMystruct.d);
	printf("objMystruct.c= %c\n", objMystruct.c);

	printf("\n\n");
	printf("MyDataObj.i = %d\n", MyDataObj.i);
	printf("MyDataObj.f= %f\n", MyDataObj.f);
	printf("MyDataObj.d = %lf\n", MyDataObj.d);
	printf("MyDataObj.c= %c\n", MyDataObj.c);

	return 0;
}

