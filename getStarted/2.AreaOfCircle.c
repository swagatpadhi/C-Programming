//write a program to calculate area of circle
#include<stdio.h>
int main() {
	int radius;
	printf("enter radius of your circle:");
	scanf("%d", &radius);
	int area = 3.14 * radius * radius;
	printf("required area is : %d \n", area);
	return 0;
}
