// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

#include<stdio.h>
int main() {
	for (int i = 1; i <= 5; i++){
		for (int j = 1; j <= i; j++){
			if ((i+j) % 2 == 0)
				printf("1 ");
			else
				printf("0 ");
		}
		printf("\n");
	}
	return 0;
}
