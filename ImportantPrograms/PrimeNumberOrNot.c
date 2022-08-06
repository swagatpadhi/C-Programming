#include<stdio.h>
int main() {
	printf("enter your number:");
	int number;
	scanf("%d", &number);
	int i;
	for (i = 2; i < number / 2; i++) {
		if (number % i == 0) {
			break;
		}
	}
	if (i == number / 2)
		printf("prime number");
	else
		printf("composite");
	return 0;
}
