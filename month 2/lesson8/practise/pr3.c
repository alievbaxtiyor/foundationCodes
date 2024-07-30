#include <stdio.h>

int main () {
	int n, count = 0;
	printf("Son kiriting: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int num = i; num > 0; num /= 10) {
			if (num % 10 == 3) {
				count++;
				break;
			}
		}
	}
	printf("%d gacha bo'lgan sonlarda 3 raqamlari soni: %d\n", n, count);
	return 0;
}
