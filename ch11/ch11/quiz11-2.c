#include <stdio.h>
#include <string.h>

//int quiz11_2_3() {
//	int ch;
//	int cnt = 0;
//	ch = getchar();
//
//	while (ch != '\n') {
//		if ((ch >= 'a') && (ch <= 'z')) cnt++;
//		ch = getchar();
//	}
//
//	printf("소문자의 개수 : %d \n", cnt);
//
//	return 0;
//}

int quiz11_2_4() {
	int ch;
	int max = 0;
	int length = 1;

	ch = getchar();

	while (ch != EOF) {
		ch = getchar();
		
		if (ch != '\n') length++;
		else if (ch == '\n') {
			if (length > max) {
				max = length;
			}
			length = 0;
		}
		
	}

	printf("가장 긴 단어의 길이 : %d \n", max);

	return 0;
}