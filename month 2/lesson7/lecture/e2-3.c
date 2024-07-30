#include <stdio.h>

int main () {

	for (int i = 40; i <= 180; i++) {
		if (i % 7 == 0) {
			printf("%d\n", i);
		}
	}
	return 0;
}
