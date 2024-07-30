#include <stdio.h>

int main () {
	int a, b, c;
	printf("Nuqtalarni kiriting:\n");
	scanf("%d%d%d", &a, &b, &c);
	if (a<b && a<c && b<c) {
		printf("Yaqin nuqta %d orasidagi masofa %d", b, b-a);
	} else if (a<b && a<c && c<b) {
		printf("Yaqin nuqta %d orasidagi masofa %d", c, c-a);
	}
}
