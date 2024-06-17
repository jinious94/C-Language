#include <stdio.h>
#include <string.h>

int quiz12_2_3() {
	char str[16];
	char temp[16];
	char star[16];

	int index = 0;
	int i;

	printf("단어 입력 : ");
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

		printf("입력한 단어 : %s, 생략한 단어 : %s \n", str, temp);

	}
	else printf("입력한 단어 : %s, 생략한 단어 : %s \n", str, str);



	return 0;
}