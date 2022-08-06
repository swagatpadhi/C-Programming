#include<stdio.h>
int main(){
printf("enter your number:");
int number ,digit ,cube , numstore , sum =0 ;
scanf("%d", &number);
numstore = number;
while(number !=0 ){
digit = number%10;
cube = digit*digit*digit;
sum =sum + cube;
number = number /10;
}
if(sum== numstore)
printf("yes it is an armstrong number");
else
printf("no it is not an armstrong number");
return 0;
}