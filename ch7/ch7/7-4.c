#include <stdio.h>

void print_line(void);

void main7_4() {
	print_line();
	printf("   �й�         �̸�         ����         ����      \n");
	print_line();
}

void print_line() {
	int i;

	for (i = 0; i < 50; i++) {
		printf("-");
	}

	printf("\n");
}