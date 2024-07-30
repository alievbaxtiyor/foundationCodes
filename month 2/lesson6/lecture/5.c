#include <stdio.h>

int main () {
	int start, stop;
	start = 10;
	stop = 99;

	do {
		int on, bir;
		on = start / 10;
		bir = start % 10;
		if (on + bir == 5) {
			printf("%d\n", start);
		}
		start++;
	} while (start <= stop);
	return 0;
}
