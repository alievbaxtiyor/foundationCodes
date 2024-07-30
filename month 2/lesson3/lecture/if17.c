#include <stdio.h>

int main () {
	int a, b, c;
	printf("Sonlarni kiriting:\n");
	scanf("%d%d%d", &a, &b, &c);
	if (a<b && b<c || a>b && b>c) {
		printf("\n%d\n%d\n%d", a*2, b*2, c*2);
	} else {
		printf("\n%d\n%d\n%d", a*(-1), b*(-1), c*(-1));
	}
}
