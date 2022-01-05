#include<stdio.h>
typedef int MY_INTEGRE;

int main(void)
{
	//function signature
	MY_INTEGRE Addition(MY_INTEGRE, MY_INTEGRE);

	//typedefes
	typedef int MY_INT;
	typedef float MY_FLOAT;
	typedef char MY_CHAR;
	typedef double MY_DOUBLE;

	typedef unsigned int UINT;
	typedef UINT HANDLE;
	typedef HANDLE HWND;
	typedef HANDLE HINSTANCE;

	//variable declaration
	MY_INT ret;
	MY_INT a = 100, i;
	MY_INT arr[] = { 10,20,30,40,50 };

	MY_FLOAT f = 10.4f;
	const MY_FLOAT PI = 3.14;

	MY_CHAR ch = '*';
	MY_CHAR arr1[] = "HELLO";
	MY_CHAR brr[][10] = { "RTR", "BATCH", "2021" };

	MY_DOUBLE d = 11.444;

	printf("\n\n");
	printf("MY_INT = %d", a);
	printf("MY_FLOAT = %f", f);
	printf("MY_CHAR = %d", ch);
	printf("MY_DOUBLE = %lf", d);
	printf("\n");

	UINT uint = 3223;
	HANDLE handle = 567;
	HWND hwnd = 8987;
	HINSTANCE hinstance = 9876;

	printf("\n\n");
	printf("UINT = %u", uint);
	printf("HANDLE = %u", handle);
	printf("HWND = %u", hwnd);
	printf("HINSTANCE = %u", hinstance);
	printf("\n");

	ret = Addition(10, 20);

	printf("Addtion of 10 and 20 is %d", ret);

	return 0;

}
MY_INTEGRE Addition(MY_INTEGRE x, MY_INTEGRE y)
{
	return (x + y);
}