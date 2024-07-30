#include <stdio.h>

int main () {
	int a;
	printf("Son kiriting:");
	scanf("%d", &a);
	switch (a) {
		case 1 ... 2147483647:
			printf("Natural son");
			break;
		default:
			printf("Natural son emas");
	}
	return 0;
}
