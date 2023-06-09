int binpow(int a, int n) {
	if (n == 0) {
		return 1;
	}
	if (n % 2 == 1) {
		return binpow (a, n - 1) * a;
	}
	else {
		int b = binpow(a, n / 2);
		return b * b;
	}
}


int binpow(int a, int n) {
    int res = 1;
    while (n != 0) {
        if (n & 1)
            res = res * a;
        a = a * a;
        n >>= 1;
    }
    return res;
}

// http://e-maxx.ru/algo/binary_pow
// https://ru.algorithmica.org/cs/algebra/binpow/
