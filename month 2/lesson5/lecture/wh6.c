#include <stdio.h>

int main () {
	int start, stop;
	start = 200;
	stop = -500;

	while (start >= stop) {
		printf("%d\n", start);
		start--;
	}
	return 0;
}
