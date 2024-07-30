#include <stdio.h>

int main () {
	int a;
	printf("Haroratni kiriting:");
	scanf("%d", &a);
	if (a>16 && a<21) {
		printf("Salqin");
	} else if (a>20 && a<27) {
		printf("Iliq");
	} else if (a>=27) {
		printf("Issiq");
	} else {
		printf("Sovuq");
	}
}
