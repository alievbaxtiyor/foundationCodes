#include <stdio.h>

int main () {
	int sum;
	for (int i = 45; i <= 120; i++) {
		if (i % 18 == 0) {
			sum += i;
		}
	}
	printf("Sum=%d", sum);
	return 0;
}
