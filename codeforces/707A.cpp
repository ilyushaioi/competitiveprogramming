#include <bits/stdc++.h>

using namespace std;
          
void solve() {  
	int n, m;
	cin >> n >> m;
	bool flag = true;
	char a[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if ((a[i][j] != 'W') && (a[i][j] != 'B') && (a[i][j] != 'G')) {
				flag = false;
				break;
			}
		}
	}
	cout << (flag == true ? "#Black&White" : "#Color");
}

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int TEST = 1;
//	cin >> TEST;
	while (TEST --> 0) {
		solve();
	}

	return 0;
}
