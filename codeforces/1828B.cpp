#include <bits/stdc++.h>

using namespace std;

int gcd (int a, int b) {
	return b ? gcd (b, a % b) : a;
}

void solve() {                    
	int n;
	cin >> n;           
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int ans = a[0] - 1;
	for (int i = 0; i < n; i++) {
		ans = gcd(ans, abs(a[i] - 1 - i));
	}
	cout << ans << '\n';
}

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int TEST = 1;
	cin >> TEST;
	while (TEST --> 0) {
		solve();
	}

	return 0;
}
