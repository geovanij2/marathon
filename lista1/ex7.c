#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, p, q;
	char c;
	scanf("%d%d %c %d",&n, &p, &c, &q);
	if (c == '+') {
		if (p + q > n)
			printf("OVERFLOW\n");
		else
			printf("OK\n");
	} else {
		if (p * q > n)
			printf("OVERFLOW\n");
		else
			printf("OK\n");
	}
	return 0;
}
