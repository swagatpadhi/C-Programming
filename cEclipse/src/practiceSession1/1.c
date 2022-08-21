#include<stdio.h>
#include<string.h>

//Write a C program to enter your name, date of birth. and mobile number.
//and display them in console.
void displayDetails(){
	char name[100];
	char dob[50];
	int mobileNo;

	printf("enter name :\n");
	fflush(stdout);
	fgets(name,100,stdin);

	printf("enter date of birth in dd/mm/yyyy format \n");
	fflush(stdout);
	fgets(dob,50,stdin);

	printf("enter mobile number : ");
	fflush(stdout);
	scanf("%d", &mobileNo);

	printf("Hello %s Your details are:\n",name);
	//doubt . why there is a new line after %s?
	printf("name :%s",name);
	printf("dob :%s",dob);
	printf("mobile no : %d\n", mobileNo);
}

