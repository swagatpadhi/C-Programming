// C Program to Swap Two Numbers
# include<stdio.h>
void swap() {
	int a, b;
	printf("enter 1st number:");
	fflush(stdout);
	scanf("%d", &a);
	printf("enter 2st number:");
	fflush(stdout);
	scanf("%d", &b);
	printf("Before swap a=%d, b=%d\n", a, b);
	swaplogic(&a, &b);
	printf("After swap a=%d, b=%d\n", a, b);
}
void swaplogic(int* a , int* b){
	int c = *b;
	*b = *a;
	*a = c;
}

