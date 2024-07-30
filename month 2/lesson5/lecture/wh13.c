#include <stdio.h>

int main () {
	int start, stop;
	start = 20;
	stop = 420;

	while (start <= stop) {
		if (start % 5 == 0 && start % 10 != 0) {
			printf("%d\n", start);
		}
		start++;
	}
	return 0;
}
