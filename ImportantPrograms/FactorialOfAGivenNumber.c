#include<stdio.h>
int main(){
printf("hello print any number :");
int number;
int factorial =1;
scanf("%d", &number);
for(int i=1;i<=number; i++){
factorial = factorial * i ;
}
printf("%d", factorial);
return 0;
}