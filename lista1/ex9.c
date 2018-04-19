#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	int maior = 1;
	while (scanf("%d", &n) == 1 && n) {
		if (n > maior)
			maior = n;
	}
	printf("%d\n", maior);
	return 0;
}
