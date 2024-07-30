#include <stdio.h>

int main () {
	int a, b;
	printf("Sonlarni kiriting:\n");
	scanf("%d%d", &a, &b);
	if (a == b*b) {
		printf("%d*%d=%d", b, b, a);
	} else if (b == a*a){
		printf("%d*%d=%d", a, a, b);
	} else {
		printf("Kvadratiga teng emas");
	}
}
