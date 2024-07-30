#include <stdio.h>

int main () {
	int start, stop;
	start = 10;
	stop = 99;

	do {
		if (start % 2 != 0 && start % 3 != 0 && start % 5 != 0 && start % 7 != 0) {
			printf("%d\n", start);
		}
		start++;
	} while (start <= stop);
	return 0;
}
