#include <stdio.h>
#include <math.h>

int main (){
	int a, b, sum, all, s1, s2;
	a = 4;
	b = 6;
	sum = a * b;
	all = a + b;
	s1 = pow(a,2);
	s2 = pow(b,2);
	printf("Sonlarning ko'paytmasi %d qo'shmasi %d kvadratlari %d %d", sum, all, s1, s2);
}
