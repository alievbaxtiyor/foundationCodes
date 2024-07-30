#include <stdio.h>

int main (){
	int a, b, c;
	a = 10;
	b = 15;
	c = a;
	a = b;
	b = c;
	printf("a=%d \nb=%d", a, b);
}
