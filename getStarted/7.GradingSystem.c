// write a program to give grades to a student 
#include<stdio.h>
int main() {
	printf("enter your marks");
	float marks;
	scanf("%f", &marks);
	if (marks < 30) {
		printf("your grade is C");
	} else if (marks >= 30 && marks < 70) {
		printf("your grade is B");
	} else if (marks >= 70 && marks <= 100) {
		printf("your grade is A");
	} else {
		printf("invalid marks entered");
	}
	return 0;
}
