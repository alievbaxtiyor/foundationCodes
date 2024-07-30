#include <stdio.h>

int main () {
	int start, stop;
	printf("Sonni kiriting: ");
	scanf("%d", &stop);

	while (start <= stop) {
		printf("%d\t", start*start);
		start++;
	}
	return 0;
}
