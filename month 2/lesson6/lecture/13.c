#include <stdio.h>

int main () {
	int n, m;
	scanf("%d%d", &n, &m);

	if (n < m) {
		do {
			printf("%d  ", m);
			m = m - 5;
		} while (m >= n);
	} else {
		do {
			printf("%d  ", n);
			n = n - 5;
		} while (n >= m);
	}
	return 0;
}
