#include<stdio.h>
int main() {
	int sum = 0;
	for (int i = 1; i <= 10; i++) {
		int number;
		printf("enter a number:");
		scanf("%d", &number);
		sum = sum + number;
	}
	printf("sum is %d", sum);
	printf("average is %d", sum / 10);
	return 0;
}
