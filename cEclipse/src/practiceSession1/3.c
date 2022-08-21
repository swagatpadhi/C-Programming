//C Program to Multiply Two Floating-Point Numbers
#include<stdio.h>
void multiply() {
	float a, b;
	printf("enter first no :");
	fflush(stdout);
	scanf("%f", &a);
	printf("enter second no :");
	fflush(stdout);
	scanf("%f", &b);
	printf("result is %f", a * b);
}
