#include<stdio.h>
int main() {
	printf("enter a number: ");
	int number;
	scanf("%d", &number);
	for (int i = 1; i <= 10; i++) {
		printf("%d X %d = %d\n", number, i, number * i);
	}
	return 0;
}
