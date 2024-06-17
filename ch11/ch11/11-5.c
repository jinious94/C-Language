#include <stdio.h>

int main11_5() {
	int res;
	char ch;

	while (1) {
		res = scanf("%c", &ch);

		// -1은 EOF와 같은 의미
		// if (res == -1) break;
		if (res == EOF) break;
		printf("%d ", ch);
	}

	return 0;
}