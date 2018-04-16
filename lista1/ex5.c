#include <stdio.h>

int main(int argc, char const *argv[])
{
	int c, p, f;
	scanf("%d", &c);
	scanf("%d", &p);
	scanf("%d", &f);
	if (c * f > p)
		printf("N\n");
	else
		printf("S\n");
	return 0;
}
