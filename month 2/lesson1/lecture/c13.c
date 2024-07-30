#include <stdio.h>

int main (){
	int a, b, c, temp;
	a = 1;
	b = 2;
	c = 3;
	temp = a;
	a = c;
	c = b;
	b = temp;
	printf("%d\n%d\n%d\n",a,b,c);
}

