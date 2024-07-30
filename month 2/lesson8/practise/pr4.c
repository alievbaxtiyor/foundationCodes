#include <stdio.h>

int main () {
	int num = 1;
	for (int i = 1; i <= 3; i++) {
		for (int j = 1; j <= 10; j++) {
			if (num % 2 == 0 && num == 2) {
				printf(" %d", num);
			}
			if (num % 3 == 0 || num % 5 == 0
			|| num % 7 == 0 && num % 2 != 0) {
				printf(" %d", num);
			}
			num++;
		}
		printf("\n");
	}
	return 0;
}
//Aliyev Baxtiyor
