#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a,b,c, menor = 20;
	scanf("%d%d%d", &a,&b,&c);
	a /= 2;
	b /= 3;
	c /= 5;
	if (a < menor)
		menor = a;
	if (b < menor)
		menor = b;
	if (c < menor)
		menor = c;
	printf("%d\n", menor);
	return 0;
}
