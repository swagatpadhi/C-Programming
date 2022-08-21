//c program to reverse a number
#include<stdio.h>

void reverseNumber() {
	int number;
	printf("enter your number :");
	fflush(stdout);
	scanf("%d", &number);
	int rev = 0;
	while (number > 0) {
		int remainder = number % 10;
		rev = (rev * 10) + remainder;
		number = number / 10;
	}
	printf("%d", rev);
}
