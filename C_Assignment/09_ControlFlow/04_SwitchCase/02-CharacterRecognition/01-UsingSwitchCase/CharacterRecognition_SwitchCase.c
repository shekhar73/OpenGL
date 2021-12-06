#include<stdio.h>
#include<conio.h>

// ASCII Values For 'A' to 'Z' => 65 to 90
#define CHAR_ALPHABET_UPPER_CASE_BEGINNING 65 
#define CHAR_ALPHABET_UPPER_CASE_ENDING 90

// ASCII Values For 'a' to 'z' => 97 to 122
#define CHAR_ALPHABET_LOWER_CASE_BEGINNING 97
#define CHAR_ALPHABET_LOWER_CASE_ENDING 122

// ASCII Values For '0' to '9' => 48 to 57
#define CHAR_DIGIT_BEGINNING 48
#define CHAR_DIGIT_ENDING 5

int main()
{
	//variable declaration
	char BA_ch;
	int BA_ch_value;

	//code
	printf("\n\n");

	printf("Enter Character : ");
	BA_ch = getch();

	printf("\n\n");

	switch (BA_ch)
	{
	case 'A':
	case 'a':

	case 'E':
	case 'e':

	case 'I':
	case 'i':

	case 'O':
	case 'o':

	case 'U':
	case 'u':
		printf("Character \'%c\' Entered By You, Is VOWEL CHaracter From the English Alphabet !!!\n\n", BA_ch);
		break;

	default:
		BA_ch_value = (int)BA_ch;
		if ((BA_ch_value >= CHAR_ALPHABET_UPPER_CASE_BEGINNING && BA_ch_value <=
			CHAR_ALPHABET_UPPER_CASE_ENDING) || (BA_ch_value >=
				CHAR_ALPHABET_LOWER_CASE_BEGINNING && BA_ch_value <=
				CHAR_ALPHABET_LOWER_CASE_ENDING))
		{
			printf("Character \'%c\' Entered By You, Is A CONSONANT CHARACTER FromThe English Alphabet !!!\n\n", BA_ch);
		}
		else if (BA_ch_value >= CHAR_DIGIT_BEGINNING && BA_ch_value <=
			CHAR_DIGIT_ENDING)
		{
			printf("Character \'%c\' Entered By You, Is A DIGIT CHARACTER !!!\n\n", BA_ch);
		}
		else
		{
			printf("character \'%c\' ENtered by you, Is a special character !!!\n\n", BA_ch);
		}

		break;
	}

	printf("Switch Case Block COmplete !!!\n");

	return 0;
}
