int main10_4() {
	int ary[5] = { 10, 20, 30, 40, 50 };
	int* pa = ary;
	int* pb = pa + 3;

	printf("pa(�迭�� 1��° ��� �ּ�) : %u \n", pa);
	printf("pb(�迭�� 4��° ��� �ּ�) : %u \n", pb);

	pa++;
	printf("pb - pa (4��° ��� �ּ� - 2��° ��� �ּ�) : %u \n", pb - pa);

	printf("�տ� �ִ� �迭 ����� �� ��� : ");
	
	if (pa < pb) printf("%d \n", *pa);
	else printf("%d \n", *pb);

	return 0;
}