#include <bits/stdc++.h>

using namespace std;

void solve() {
	string s;
	cin >> s;
	int n = s.size();
	if (n % 2 == 1) {
		cout << "NO" << '\n';
		return;
	}
	string s1 = s.substr(0, n / 2);
	string s2 = s.substr(n / 2, n);
	cout << (s1 == s2 ? "YES" : "NO") << '\n';	
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
