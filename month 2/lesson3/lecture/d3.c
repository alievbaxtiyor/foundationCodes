#include <stdio.h>

int main () {
	int a, b;
	char s;
	printf("Amalni kiriting:\n");
	scanf("%d%c%d", &a, &s, &b);
	if (s == 43) {
		printf("%d",a+b);
	} else if (s == 45) {
		printf("%d",a-b);
	} else if (s == 42) {
		printf("%d", a*b);
	} else if (s == 47) {
		printf("%d", a/b);
	} else {
		printf("Amal yo'q");
	}
}
