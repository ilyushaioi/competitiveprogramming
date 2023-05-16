// created by ilyusha //

#include <bits/stdc++.h>

using namespace std;

void solve() {
  int l, r;
  cin >> l >> r;
  if (l * 2 > r) {
    cout << -1 << ' ' << -1 << '\n';
  }
  else {
    cout << l << ' ' << l * 2 << '\n';
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
