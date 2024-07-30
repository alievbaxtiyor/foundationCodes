#include <stdio.h>

int main () {
	int a;
	printf("Yoshni kiriting:");
	scanf("%d", &a);
	if (a<18) {
		printf("Yosh bola");
	} else if (a>17 && a<60) {
		printf("O'rta yosh");
	} else {
		printf("Yoshi katta");
	}
}
