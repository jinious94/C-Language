#include <stdio.h>

int quiz6_2_3() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if ((i == j) || (i + j == 4)) printf("*");
			else printf(" ");
		}
		printf("\n");
	}

	return 0;
}

int quiz6_2_4() {
	int num, count = 0, flag = 0;;
	printf("2 이상의 정수를 입력하세요 : ");
	scanf("%d", &num);

	for (int i = 2; i < num; i++) {
		flag = 0;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				flag = 1;
				break;
			}
		}
		if (!flag) {
			printf("%5d", i);
			count++;
			if (count == 5) {
				printf("\n");
				count = 0;
			}
		}
	}

	return 0;
}