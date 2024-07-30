#include <stdio.h>

int main () {
	int start, stop;
	start = 50;
	stop = 440;

	while (start <= stop) {
		if (start % 11 == 0) {
			printf("%d\n", start);
		}
		start++;
	}
	return 0;
}
