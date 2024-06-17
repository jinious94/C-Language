#include <stdio.h>

void print_char(char ch, int count);

void main7_3() {
	print_char('@', 5);
}

void print_char(char ch, int count) {
	int i;

	for (int i = 0; i < count; i++) {
		printf("%c", ch);
	}
}