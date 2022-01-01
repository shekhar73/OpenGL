#include<stdio.h>
#include<string.h>
#define MAX_STRING_LENGTH 512

int main(void)
{
	//function prototype
	void MyStringReverse(char[]);

	//variable declaration
	char BA_chArray_Orignal[MAX_STRING_LENGTH];
	printf("\n\n");

	printf("Enter a string\n");
	gets_s(BA_chArray_Orignal, MAX_STRING_LENGTH);

	MyStringReverse(BA_chArray_Orignal);

	printf("Reverse string is : %s", BA_chArray_Orignal);

	return 0;

}
void MyStringReverse(char str[])
{
	int iStrlen = strlen(str);
	int i = 0;
	char temp;
	while (i < iStrlen)
	{
		temp = str[i];
		str[i] = str[iStrlen];
		str[iStrlen] = str[i];

		i++;
		iStrlen--;
	}
}




