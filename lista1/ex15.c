#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, p, x, y, count = 0;
	scanf("%d%d", &n, &p);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d%d", &x, &y);
		if (x + y >= p)
			count++;
	}
	printf("%d\n", count);
	return 0;
}
