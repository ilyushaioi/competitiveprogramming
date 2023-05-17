// created by ilyusha //

#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int ans = 0;
  for (int i = 1; i < n; i++) {
    int x = a[i];
    int y = a[i - 1];
    if (x < y) {
      swap(x, y);
    }
    while (y * 2 < x) {
      y *= 2;
      ans++;
    }
  }
  cout << ans << '\n';
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
