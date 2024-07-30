#include <stdio.h>

int main () {
	int a, b, c;
	printf("Sonlarni kiriting:\n");
	scanf("%d%d%d", &a, &b, &c);
	if (a==b) {
		printf("3-son");
	} else if (a==c) {
		printf("2-son");
	} else if (b==c) {
		printf("1-son");
	} else {
		printf("Sonlar teng emas");
	}
}
