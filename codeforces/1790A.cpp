#include <bits/stdc++.h>

using namespace std;

void solve() {
	string s;
	cin >> s;
	string t = "3141592653589793238462643383279";
	int cnt = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == t[i]) {
			cnt++;
		}
		else {
			cout << cnt << '\n';
			return;
		}
	}	
	cout << cnt << '\n';
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
