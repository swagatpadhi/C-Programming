#include<stdio.h>
int main() {
	printf("enter a number:");
	int number, digit, reverse = 0;
	scanf("%d", &number);
	int original = number;
	while (number > 0) {
		digit = number % 10;
		reverse = reverse * 10 + digit;
		number = number / 10;
	}

	if (reverse == original) {
		printf("yes palindrome");
	} else {
		printf("not palindrome");
	}
	return 0;
}
