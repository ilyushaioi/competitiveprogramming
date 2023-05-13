#include <bits/stdc++.h>

using namespace std;

void solve() { 
	int n;
	cin >> n;
	if (n % 7 == 0) {
		cout << n << '\n';
		return;
	}	
	else {
		int ans = -1;
		for (int i = 0; i < 10; i++) {
			if ((n - n % 10 + i) % 7 == 0) {
				ans = n - n % 10 + i;
			}
		}
		cout << ans << '\n';
	}
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
