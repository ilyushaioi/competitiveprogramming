#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007

void solve() {        
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}	
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	long long ans = 1;
	for (int i = 0; i < n; i++) {
		int j = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
		ans = (ans * (j - i)) % MOD;
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
