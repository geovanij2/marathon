#include <stdio.h>

int main(int argc, char const *argv[])
{
	int cv, ce, cs, fv, fe, fs;
	scanf("%d%d%d%d%d%d", &cv, &ce, &cs, &fv, &fe, &fs);
	if ((cv * 3 + ce) > (fv * 3 + fe)) {
		printf("C\n");
	} else if ((fv * 3 + fe) > (cv * 3) + ce) {
		printf("F\n");
	} else {
		if (cs > fs) {
			printf("C\n");
		} else if (fs > cs) {
			printf("F\n");
		} else {
			printf("=\n");
		}
	}
	return 0;
}
