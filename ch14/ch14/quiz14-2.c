int quiz14_2_4() {
	int total = 0;
	int arr[5][6] = 
	{ 
		{ 1, 2, 3, 4, 5, 0 }, 
		{ 6, 7 ,8, 9, 10, 0 }, 
		{ 11, 12, 13, 14, 15, 0 },
		{ 16, 17, 18, 19, 20, 0 },
		{ 0, }
	};

	for (int i = 0; i < 4; i++) {
		int sum = 0;
		for (int j = 0; j < 5; j++) {
			sum += arr[i][j];
		}
		arr[i][5] = sum;
		total += sum;
	}

	for (int i = 0; i < 5; i++) {
		int sum = 0;
		for (int j = 0; j < 4; j++) {
			sum += arr[j][i];
		}
		arr[4][i] = sum;
		total += sum;
	}

	arr[4][5] = total;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 6; j++) {
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}