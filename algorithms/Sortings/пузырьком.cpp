for (int i = 0; i < n - 1; i++) {
	for (int j = 0; j < n - i - 1; j++) {
		if (a[j] > a[j + 1]) {
			temp = a[j];
			a[j] = a[j + 1];
			a[j + 1] = temp;
		}
	}
}

//http://neerc.ifmo.ru/wiki/index.php?title=%D0%A1%D0%BE%D1%80%D1%82%D0%B8%D1%80%D0%BE%D0%B2%D0%BA%D0%B0_%D0%BF%D1%83%D0%B7%D1%8B%D1%80%D1%8C%D0%BA%D0%BE%D0%BC
