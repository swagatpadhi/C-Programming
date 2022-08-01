//write a code to check if user is an adult or not
#include<stdio.h>
int main(){
int age;
printf("please enter your age:");
scanf("%d", &age);
if (age>=18){
printf("adult \n");
printf("you can drive \n");
}
else if(age>13 && age<18){
printf("teenager");
}
else{
printf("child");
}
return 0;
}