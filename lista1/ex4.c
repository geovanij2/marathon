#include <stdio.h>

int main(int argc, char const *argv[])
{
	int v, i, j, k, l;
	int n = 1;
	while(scanf("%d", &v) == 1 && v) {
		i = v/50;
		j = (v%50)/10;
		k = ((v%50)%10)/5;
		l = ((v%50)%10)%5;
		printf("Teste %d\n", n++);
		printf("%d %d %d %d\n\n", i, j, k, l);
	}
	return 0;
}
