#include <stdio.h>

void input_nums(int* lotto_nums);
void print_nums(int* lotto_nums);

int quiz10_2_3() {
	int lotto_nums[6];

	input_nums(lotto_nums);
	print_nums(lotto_nums);

	return 0;
}

void input_nums(int* lotto_nums) {
	int index = 0;

	while (1) {
		if (index > 5) break;

		int flag = 0;
		int temp;
		printf("��ȣ �Է� : ");
		scanf("%d", &temp);

		for (int i = 0; i < 6; i++) {
			if (lotto_nums[i] == temp) {
				flag = 1;
				break;
			} 
		}

		if (flag) {
			printf("���� ��ȣ�� �ֽ��ϴ�! \n");
		} else {
			lotto_nums[index++] = temp;
		}	
	}
}

void print_nums(int* lotto_nums) {
	printf("�ζ� ��ȣ : ");
	for (int i = 0; i < 6; i++) {
		printf("%3d", lotto_nums[i]);
	}

}