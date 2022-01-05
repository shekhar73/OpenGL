#include<stdio.h>



int main()
{

	struct BA_MyPoint
	{
		int x;
		int y;
	}pointObj;

	struct BA_MyPointProperties
	{
		int quadrant;
		char axis_location[10];
	}pointPropertiesObj;

	//code
	printf("\n\n");
	printf("Enter a X - Coordinate For A PointObj");
	scanf("%d", &pointObj.x);

	printf("Enter a Y - Coordinate for a Pointobj");
	scanf("%d", &pointObj.y);

	printf("Point cordinate X and Y Are : (%d %d) !!!\n\n", pointObj.x, pointObj.y);

	if (pointObj.x == 0 && pointObj.y == 0)
	{
		printf("The Point Is the Origin (%d, %d) !!!\n", pointObj.x, pointObj.y);
	}
	else
	{
		if (pointObj.x == 0)
		{
			if (pointObj.y < 0)
			{
				strcpy(pointPropertiesObj.axis_location, "Negative Y");
			}
			if (pointObj.y > 0)
			{
				strcpy(pointPropertiesObj.axis_location, "Positive Y");
			}
		}
		else if (pointObj.y == 0)
		{
			if (pointObj.x < 0)
			{
				strcpy(pointPropertiesObj.axis_location, "Negative X");
			}
			if (pointObj.x > 0)
			{
				strcpy(pointPropertiesObj.axis_location, "Positive X");
			}

			pointPropertiesObj.quadrant = 0;

			printf("The point Lies On the % s axis\n", pointPropertiesObj.axis_location);
		}
		else //both x and y axis is not zero
		{
			pointPropertiesObj.axis_location[0] = '\n';

			if (pointObj.x > 0 && pointObj.y > 0)
			{
				pointPropertiesObj.quadrant = 1;
			}
			else if (pointObj.x < 0 && pointObj.y > 0)
			{
				pointPropertiesObj.quadrant = 2;
			}
			else if (pointObj.x < 0 && pointObj.y < 0)
			{
				pointPropertiesObj.quadrant = 3;
			}
			else
			{
				pointPropertiesObj.quadrant = 4;
			}

			printf("The point lies on quadrant on number %d\n\n", pointPropertiesObj.quadrant);
		}
	}
	return 0;
}