#include<stdio.h>
int main() {
	printf("enter a letter :");
	char letter;
	scanf("%c", &letter);

	switch (letter) {
	case 'a':
		printf("vowel");
		break;
	case 'e':
		printf("vowel");
		break;
	case 'i':
		printf("vowel");
		break;
	case 'o':
		printf("vowel");
		break;
	case 'u':
		printf("vowel");
		break;
	default:
		printf("consonant");
	}
	return 0;
}
