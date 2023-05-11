#include <bits/stdc++.h>

using namespace std;

void solve() {             
	int n;
	cin >> n;
	if (n % 2 == 0) {
		cout << n / 2 << '\n';
	}
	else {
		cout << (n + 1) / 2 << '\n';
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
