#include <stdio.h>

int main () {

	for (int i = 34; i <= 88; i++) {
		if (i % 7 == 0) {
			if (i % 2 == 0) {
				printf("%d\n", i);
			}
		}
	}
	return 0;
}
