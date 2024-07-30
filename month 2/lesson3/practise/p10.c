#include <stdio.h>

int main () {
	int k;
	printf("Kitob sahifasini kiriting:");
	scanf("%d", &k);
	if (k<100) {
		printf("Kichkina kitob");
	} else if (k>99 && k<300) {
		printf("O'rtacha kitob");
	} else {
		printf("Katta kitob");
	}
}
