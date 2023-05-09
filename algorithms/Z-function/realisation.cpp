// O(n^2), неэффективный способ
vector<int> z_function_trivial (string s) {
	int n = (int) s.size();
	vector<int> z (n);
	for (int i = 1; i < n; i++) {
		while (i + z[i] < n && s[z[i]] == s[i+z[i]]) {
			z[i]++;
    }
  }
	return z;
}


// O(n), эффективный способ
vector<int> z_function (string s) {
	int n = (int) s.size();
	vector<int> z (n);
	for (int i = 1, l = 0, r = 0; i < n; i++) {
		if (i <= r)
			z[i] = min(r - i + 1, z[i - l]);
		while (i + z[i] < n && s[z[i]] == s[i + z[i]])
			z[i]++;
		if (i + z[i] - 1 > r)
			l = i,  r = i + z[i] - 1;
	}
	return z;
}

// https://e-maxx.ru/algo/z_function
// http://neerc.ifmo.ru/wiki/index.php?title=Z-%D1%84%D1%83%D0%BD%D0%BA%D1%86%D0%B8%D1%8F
