#include<stdio.h>
int main() {
	printf("enter a number:");
	int number, i, a = -1, b = 1;
	scanf("%d", &number);
	for (i = 1; i <= number; i++) {
		int c = a + b;
		printf("%d \n", c);
		a = b;
		b = c;
	}
	return 0;
}
