#include <bits/stdc++.h>

using namespace std;

void solve() {
	long long a, b, k, m;
	cin >> a >> b >> k >> m;
	long long l = 0;
	long long r = k / 2;
	long long mid, col, row;
	while (l <= r) {
		mid = (l + r) / 2;
		row = mid + 1;
		col = (k - mid + 1);
		if (row * col == m) {
			if (row <= a && col <= b) {
				cout << row - 1 << ' ' << col - 1 << '\n';
				return;
			}	
			if (row <= b && col <= a) {
				cout << col - 1 << ' ' << row - 1 << '\n';
				return;
			}
			break;
		}
		if (row * col > m) {
			r = mid - 1;
		}
		else {
			l = mid + 1;
		}
	}
	cout << -1 << '\n';
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
