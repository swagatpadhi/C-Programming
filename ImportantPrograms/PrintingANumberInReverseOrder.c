#include<stdio.h>
int main(){
printf("enter any number:");
int number , reverse =0 , digit;
scanf("%d", &number);

while(number !=0){
digit = number%10;
reverse= reverse*10 + digit;
number =number/10;
}
printf("reverse of entered number is %d", reverse);
return 0;
}