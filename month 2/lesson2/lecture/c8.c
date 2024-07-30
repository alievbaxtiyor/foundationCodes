#include <stdio.h>
#include <math.h>

int main (){
	int a, yuz, on, bir;
	printf("Son kiriting: ");
	scanf("%d", &a);
	yuz = a / 100;
	on = a / 10 % 10;
	bir = a % 10;
	printf("Yuzlar=%d onlar=%d birlar=%d", yuz, on, bir);
}
