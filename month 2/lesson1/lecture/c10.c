#include <stdio.h>

int main (){
	int num, yuz, on, bir;
	num = 948;
	yuz = num /100;
	on = num / 10 % 10;
	bir = num % 10;
	printf("Yuzlar %d onlar %d bir %d", yuz, on, bir);
}
