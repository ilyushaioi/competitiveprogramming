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
  vector<int> b(a);
  sort(b.begin(), b.end());
  for (int i = 0; i < n; i++) {
    if (a[i] == b[n - 1]) {
      cout << a[i] - b[n - 2] << ' ';
    }
    else {
      cout << a[i] - b[n - 1] << ' ';
    }
  }
  cout << '\n';
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
