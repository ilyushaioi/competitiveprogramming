#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	int ass = 2;
	cin >> n;
	if (n % 2 != 1) {
		for (int i = 0; i < n; i++) {
			cout << ass << ' ';
			ass++;
			ass++;
		}			
	}	
	else {
		for (int i = 1; i <= n; i++) {
			cout << i << ' ';
		}
	}
	cout << '\n';
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
