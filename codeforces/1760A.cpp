#include <bits/stdc++.h>

using namespace std;

void solve() {
	vector<int> a(3);
	for (int i = 0; i < 3; i++) {
		cin >> a[i];
	} 
	int mx = *max_element(a.begin(), a.end());
	int mn = *min_element(a.begin(), a.end());
	for (int i = 0; i < 3; i++) {
		if (a[i] == mx or a[i] == mn) {
			a[i] = 0;
		}
	}
	int mx2 = *max_element(a.begin(), a.end());
	cout << mx2 << '\n';
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
