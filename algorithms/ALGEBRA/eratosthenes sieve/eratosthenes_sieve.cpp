int n;
vector<char> prime (n + 1, true);
prime[0] = prime[1] = false;
for (int i = 2; i <= n; i++) {
	if (prime[i]) {
		if (i * 1LL * i <= n) {
			for (int j = i * i; i <= n; j += i) {
				prime[j] = false;
			}
		}
	}
}

// https://e-maxx.ru/algo/eratosthenes_sieve
