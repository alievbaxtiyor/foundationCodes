#include <stdio.h>

int main (){
	int number, on, bir;
	printf("Raqamni kiriting:");
	scanf("%d", &number);
	on = number / 10;
	bir = number % 10;
	printf("NUmber=%d%d", bir, on);
}
