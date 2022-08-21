// C Program to Add Two Integers
#include<stdio.h>
void sum() {
	int a, b;
	printf("enter first no :");
	fflush(stdout);
	scanf("%d", &a);
	printf("enter second no :");
	fflush(stdout);
	scanf("%d", &b);
	printf("Sum is %d",sumResult(a, b));
}

int sumResult(int a, int b) {
	return a+b ;
}
