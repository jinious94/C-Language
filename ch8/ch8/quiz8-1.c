#include <stdio.h>

int quiz8_1_3() {
	int A[3] = { 1, 2, 3 };
	int B[10];
	int i;

	for (i = 0; i < sizeof(B) / sizeof(B[0]); i++) {
		B[i] = A[i % 3];
	}

	for (i = 0; i < sizeof(B) / sizeof(B[0]); i++) {
		printf("%5d", B[i]);
	}

	printf("\n");

	return 0;
}