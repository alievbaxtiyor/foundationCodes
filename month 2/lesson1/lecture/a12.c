#include <stdio.h>

int main () {
	int a, b, c, v, s;
	a=4;
	b=6;
	c=5;
	v=a*b*c;
	s=2*(a*b+b*c+a*c);
	printf("Hajmi %d yuzasi %d", v, s);
}
