#include <stdio.h>

int main () {
	int start, stop;
	start = 100;
	stop = 240;

	while (start <= stop) {
		if (start % 2 != 0) {
			printf("%d\n", start);
		}
		start++;
	}
	return 0;
}
