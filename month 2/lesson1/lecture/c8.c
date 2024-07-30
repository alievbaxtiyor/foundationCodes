#include <stdio.h>

int main () {
	int a, b, temp;
	a = 3;
	b = 4;
	temp = a;
	a = b;
	b = temp;
	printf("A=%d B=%d", a, b );
}
