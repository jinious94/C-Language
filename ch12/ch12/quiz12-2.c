#include <stdio.h>
#include <string.h>

int quiz12_2_3() {
	char str[16];
	char temp[16];
	char star[16];

	int index = 0;
	int i;

	printf("�ܾ� �Է� : ");
	scanf("%s", str);

	if (strlen(str) >= 6) {
		while (index < 6) {
			temp[index] = str[index];
			index++;
		}

		int num = strlen(str) + 1 - index;

		for (i = 0; i < num; i++) {
			star[i] = '*';
		}

		temp[index - 1] = '\0';
		star[i] = '\0';

		strcat(temp, star);

		printf("�Է��� �ܾ� : %s, ������ �ܾ� : %s \n", str, temp);

	}
	else printf("�Է��� �ܾ� : %s, ������ �ܾ� : %s \n", str, str);



	return 0;
}