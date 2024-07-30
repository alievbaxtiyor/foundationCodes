#include <stdio.h>

int main () {

	for (int i = 25; i <= 690; i++) {
		if (i % 5 == 0 && i % 9 == 0) {
			printf("%d\n", i);
		}
	}
	return 0;
}
