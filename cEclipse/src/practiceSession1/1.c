#include<stdio.h>
int main() {

	printf("enter a number:");
	fflush(stdout);
	int number, i, a = -1, b = 1;
	scanf("%d", &number);
	for (i = 1; i <= number; i++) {
		int c = a + b;
		printf("%d ", c);
		a = b;
		b = c;
	}
	return 0;
}

