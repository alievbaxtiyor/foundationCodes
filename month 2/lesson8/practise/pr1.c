#include <stdio.h>

int main () {
	int sum = 1;
	for (int i = 2; i <= 19; i++) {
		for (int j = 1; j <= 1; j++) {
			sum = sum * i;
			printf("%d!=%d\n", i, sum);
		}
	}
	return 0;
}
