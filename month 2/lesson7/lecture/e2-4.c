#include <stdio.h>

int main () {

	for (int i = 50; i <= 440; i++) {
		if (i % 11 == 0) {
			printf("%d\n", i);
		}
	}
	return 0;
}
