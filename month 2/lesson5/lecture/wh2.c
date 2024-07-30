#include <stdio.h>

int main () {
	int start , stop;
	start = 1000;
	stop = 1;

	while (start >= stop) {
		printf("%d\n", start);
		start--;
	}
	return 0;
}
