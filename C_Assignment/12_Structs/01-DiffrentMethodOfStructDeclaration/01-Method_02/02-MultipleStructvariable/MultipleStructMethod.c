#include<stdio.h>

struct Demo
{
	int x;
	int y;
};

struct Demo Demo_obj1;
struct Demo Demo_obj2;
struct Demo Demo_obj3;
struct Demo Demo_obj4;
struct Demo Demo_obj5;

int main()
{
	//assigning values all the obj type variable
	Demo_obj1.x = 10;
	Demo_obj1.y = 20;

	Demo_obj2.x = 30;
	Demo_obj2.y = 40;

	Demo_obj3.x = 50;
	Demo_obj3.y = 60;

	Demo_obj4.x = 70;
	Demo_obj4.y = 80;

	Demo_obj5.x = 90;
	Demo_obj5.y = 100;

	//Displayong the all data by using printf function
	printf("\n\n");

	printf("Value of X and Y of Demo struct obj1 are: (%d %d)\n", Demo_obj1.x, Demo_obj1.y);
	printf("Value of X and Y of Demo struct obj2 are: (%d %d)\n", Demo_obj2.x, Demo_obj2.y);
	printf("Value of X and Y of Demo struct obj3 are: (%d %d)\n", Demo_obj3.x, Demo_obj3.y);
	printf("Value of X and Y of Demo struct obj4 are: (%d %d)\n", Demo_obj4.x, Demo_obj4.y);
	printf("Value of X and Y of Demo struct obj5 are: (%d %d)\n", Demo_obj5.x, Demo_obj5.y);

	return 0;
}