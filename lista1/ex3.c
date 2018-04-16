#include <stdio.h>

int fat(int n) {
	if (n)
		return n * fat(n-1);
	else
		return 1;
}

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);
	printf("%d\n", fat(n));
	return 0;
} 
