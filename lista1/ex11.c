#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, t, v, d = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d%d", &t, &v);
		d += t * v;
	}
	printf("%d\n", d);
	return 0;
}
