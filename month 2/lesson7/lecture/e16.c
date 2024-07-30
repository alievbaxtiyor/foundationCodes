#include <stdio.h>

int main () {
	int son, max, count = 1, last;
	printf("Son kiriting: ");
	scanf("%d", &son);
	for (int i = son; i >= 1; i = i/10) {
		last = i % 10;
		if (count == 1 || max < last) {
			max = last;
		}
		count++;
	}
	printf("%d", max);
	return 0;
}
