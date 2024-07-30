#include <stdio.h>

int main () {
	int start, stop;
	start = 1;
	stop = 1000;

	while (start <= stop) {
		if (start % 11 == 0 && start % 3 == 0 && start % 9 == 0) {
			printf("%d\n", start);
		}
		start++;
	}
	return 0;
}
