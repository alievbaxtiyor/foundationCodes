#include <stdio.h>

int main () {
	int a, b, c, d;
	printf("Sonlarni kiriting:\n");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	if (a==b && b==c) {
		printf("4-son");
	} else if (a==b && b==d) {
		printf("3-son");
	} else if (a==c && c==d) {
		printf("2-son");
	} else {
		printf("1-son");
	}
}
