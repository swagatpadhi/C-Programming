// program to check if  a given number is natural number or not
#include<stdio.h>
int main() {
	printf("enter your number: ");
	int number;
	scanf("%d", &number);

	if (number >= 1) {
		printf("your number is a natural number");
	} else {
		printf("your number isn't a natural number");
	}
	return 0;
}
