#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;
  int cnt = 0;
  int t = 1;
  while (t <= n) {
    for (int i = 1; i < 10; i++) {
      if (t * i <= n) {
        cnt++;
      }
    }
    t = 10 * t + 1;
  }
  cout << cnt << '\n';
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
