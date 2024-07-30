#include <stdio.h>

int main () {
	int start, stop;
	start = 40;
	stop = 180;

	while (start <= stop) {
		if (start % 7 == 0) {
			printf("%d\n", start);
		}
		start++;
	}
	return 0;
}
