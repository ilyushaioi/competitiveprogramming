#include <bits/stdc++.h>

using namespace std;
          
void solve() {                       
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int mx = max(c, d);
	int MX = max(a, b);
	if (MX == a) {
		if (mx < b) {
			cout << "NO\n";
			return;
		}
	}	
	if (MX == b) {
		if (mx < a) {
			cout << "NO\n";
			return;
		}
	}
	if (mx == c) {
		if (MX < d) {
			cout << "NO\n";
			return;
		}
	}
	if (mx == d) {
		if (MX < c) {
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
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
