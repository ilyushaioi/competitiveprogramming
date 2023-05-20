#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  for (int i = 0; i < n + 1; i++) {
    if (i * (i - 1) / 2 + (n - i) * (n - i - 1) / 2 == k) {
      cout << "YES" << '\n';
      for (int j = 1; j < n + 1; j++) {
        cout << (j <= i ? 1 : -1) << ' ';
      }
      cout << '\n';
      return;
    }
  }
  cout << "NO" << '\n';
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
