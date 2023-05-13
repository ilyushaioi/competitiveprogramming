#include <bits/stdc++.h>

using namespace std;

void solve() {                             
	string s;
	cin >> s;
	int c[2] {};
	for (auto x : s) {
		c[x - '0']++;
	}
	cout << min(c[0], c[1]) - (c[0] == c[1]) << '\n';
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
