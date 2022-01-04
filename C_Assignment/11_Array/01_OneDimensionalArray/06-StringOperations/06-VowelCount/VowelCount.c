#include<stdio.h>
#define MAX_STRING_LENGTH 512

int main()
{
	char BA_MyString[MAX_STRING_LENGTH];

	printf("Enter a string: ");
	gets_s(BA_MyString, MAX_STRING_LENGTH);
	int i;
	int CountVowel[5] = { 0 };
	char Vowel[5] = { 'a', 'e' ,'i', 'o'  ,'u' };

	for (i = 0; i < strlen(BA_MyString); i++)
	{
		switch (BA_MyString[i])
		{
		case 'a':
		case 'A':
			CountVowel[0]++;
			break;

		case 'e':
		case 'E':
			CountVowel[1]++;
			break;

		case 'i':
		case 'I':
			CountVowel[2]++;
			break;

		case 'O':
		case 'o':
			CountVowel[3]++;
			break;

		case 'u':
		case 'U':
			CountVowel[4]++;
			break;

		default:
			break;
		}
	}

	printf("Vowel Count is:->\n");
	for (i = 0; i < 5; i++)
	{
		printf("%c = %d\n", Vowel[i], CountVowel[i]);
	}

	return 0;
}

