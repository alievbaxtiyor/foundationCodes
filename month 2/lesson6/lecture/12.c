#include <stdio.h>

int main () {
	int n, m;
	scanf("%d%d", &n, &m);

	if (n > m) {
		do {
			printf("%d\n", m);
			m = m + 3;
		} while (m <= n);
	} else {
		do {
			printf("%d\n", n);
			n = n + 3;
		} while (n <= m);
	}
	return 0;
}
