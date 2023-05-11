#include <bits/stdc++.h>

using namespace std;

void solve() {        
	int h, m;
	cin >> h >> m;
	int k = h * 60 + m;
	cout << 1440 - k << '\n';
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
