#include <stdio.h>

int my_gets() {
	int i = 0;
	char str[20];
	char ch;

	do {
		ch = getchar();
		str[i] = ch;
		i++;
	} while (ch != '\n');

	str[--i] = '\0';
	printf("%s \n", str);

	return 0;
}