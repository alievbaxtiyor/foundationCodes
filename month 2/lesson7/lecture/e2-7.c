#include <stdio.h>

int main () {

	for (int i = 1; i <= 4000; i++) {
		if (i % 3 == 0 && i % 9 == 0 && i % 11 == 0) {
			printf("%d\n", i);
		}
	}
	return 0;
}
