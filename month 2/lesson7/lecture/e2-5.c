#include <stdio.h>

int main () {

	for (int i = 90; i <= 210; i++) {
		if (i % 25 == 0) {
			printf("%d\n", i);
		}
	}
	return 0;
}
