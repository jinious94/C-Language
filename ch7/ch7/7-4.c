#include <stdio.h>

void print_line(void);

void main7_4() {
	print_line();
	printf("   학번         이름         전공         학점      \n");
	print_line();
}

void print_line() {
	int i;

	for (i = 0; i < 50; i++) {
		printf("-");
	}

	printf("\n");
}