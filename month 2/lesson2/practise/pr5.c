#include <stdio.h>
#include <math.h>

int main (){
	int a, b;
	float g;
	printf("Sonlarni kiriting:\n");
	scanf("%d%d", &a, &b);
	g = sqrt(a*b);
	printf("GEO=%f", g);
}
