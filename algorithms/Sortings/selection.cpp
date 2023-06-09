for (int i = 0; i < n - 1; i++) {
	int minj = i;
	for (int j = i + 1; j < n; j++) {
		if (a[j] < a[minj]) {
			minj = j;
		}
	}
	swap(a[i], a[minj]);
}

void selection_sort(int *a, int n) {
    for (int k = 0; k < n - 1; k++)
        for (int j = k + 1; j < n; j++)
            if (a[k] > a[j])
                swap(a[j], a[k]);
}

// https://neerc.ifmo.ru/wiki/index.php?title=%D0%A1%D0%BE%D1%80%D1%82%D0%B8%D1%80%D0%BE%D0%B2%D0%BA%D0%B0_%D0%B2%D1%8B%D0%B1%D0%BE%D1%80%D0%BE%D0%BC
