#include <stdio.h>

int main () {
	int start, stop;
	start = 300;
	stop = 150;

	while (start >= stop) {
		printf("%d\n", start);
		start--;
	}
	return 0;
}
