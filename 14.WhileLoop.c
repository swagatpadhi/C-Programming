#include <stdio.h>
int main(){
printf("enter any number :");
int number;
scanf("%d", &number);
//for(int i=0 ; i<=number ; i++){
//printf("%d \n", i);
//}
int i=0;
while(i<=number){
printf("%d \n", i);
i++;
}

return 0;
}