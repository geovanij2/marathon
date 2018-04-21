#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, k, x;
	scanf("%d%d", &n, &k);
	int v[k];
	for (int i = 0; i < k; ++i)
	{
		v[i] = 0;
	}
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &x);
		v[x-1]++;
	}
	int min = 1000000;
	for (int i = 0; i < k; ++i)
	{
		if (v[i] < min) {
			min = v[i];
		}
	}
	printf("%d\n", min);
	return 0;
}
