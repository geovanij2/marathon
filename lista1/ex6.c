#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, i, t, winner;
	int test = 1;
	while (scanf("%d", &n) == 1 && n) {
		for (i = 1; i <= n; i++) {
			scanf("%d", &t);
			if (t == i) {
				winner = t;
			}
		}
		printf("Teste %d\n%d\n\n", test++, winner);
	}
	return 0;
}
