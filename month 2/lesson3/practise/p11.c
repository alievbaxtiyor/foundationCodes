#include <stdio.h>

int main () {
	int a, yuz, on, bir;
	printf("Son kiriting:");
	scanf("%d", &a);
	yuz = a / 100;
	on = a % 100 / 10;
	bir = a % 10;
	if (yuz>on && yuz>bir) {
		printf("A=%d", yuz);
	} else if (on>yuz && on>bir) {
		printf("B=%d", on);
	} else if (yuz == on && yuz == bir){
		printf("Teng");
	} else {
		printf("C=%d", bir);
	}
}
