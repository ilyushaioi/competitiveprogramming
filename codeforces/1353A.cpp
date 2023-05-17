// created by ilyusha //

#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;
  if (n == 1) {
    cout << 0 << "\n";
  }
  else if (n == 2) {
    cout << m << "\n";
  }
  else {
    cout << 2 * m << "\n";
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int TEST = 1;
  cin >> TEST;
  while (TEST--) {
    solve();
  }

  return 0;
}
