#include <stdio.h>

int main () {
	int a;
	printf("Yilni kiriting:");
	scanf("%d", &a);
	if (a % 4 == 0 && a % 100 != 0 || a % 400 ==0) {
		printf("Kabisa yili");
	} else {
		printf("Kabisa yili emas");
	}
}
