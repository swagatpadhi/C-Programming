#include<stdio.h>
int main() {
	printf("enter any number: ");
	int number;
	scanf("%d", &number);
	int sum = 0;
	for (int i = 1; i <= number; i++) {
		sum = sum + i;
	}
	printf("%d", sum);
	return 0;
}
