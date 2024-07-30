#include <stdio.h>

int main (){
	int a, b, c;
	printf("Sonlarni kiriting:\n");
	scanf("%d%d", &a, &b);
	c = a;
	a = b;
	b = c;
	printf("A=%d\nB=%d", a, b);
}
