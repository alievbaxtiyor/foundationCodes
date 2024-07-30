#include <stdio.h>

int main () {
	int son, last;
	scanf("%d", &son);

	for (int i = son; i >= 1; i = i / 10) {
		last = i % 10;
		printf("%d ",last);
	}
	return 0;
}
