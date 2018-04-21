#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, l, c;
	int total = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) 
	{
		scanf("%d%d", &l, &c);
		if (l > c)
			total += c;
	}
	printf("%d\n", total);
	return 0;
}
