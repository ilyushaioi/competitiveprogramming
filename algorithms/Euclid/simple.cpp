int gcd (int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return gcd (b, a % b);
	}
}

// or

int gcd (int a, int b) {
	return b ? gcd (b, a % b) : a;
}

// or

int gcd (int a, int b) {
	while (b) {
		a %= b;
		swap(a, b);
	}
	return a;
}

//https://e-maxx.ru/algo/euclid_algorithm
