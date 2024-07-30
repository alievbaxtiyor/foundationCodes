#include <stdio.h>

int main () {
	int start, stop;
	start = 1;
	stop = 888;

	while (start <= stop) {
		printf("%d\n", start);
		start++;
	}
	return 0;
}
