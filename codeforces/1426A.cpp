#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n, x;
  cin >> n >> x;
  int cnt = 1;
  if (n == 1 || n == 2) {
    cout << 1 << '\n';
    return;
  }
  else {
    n -= 2;
    while (n > 0) {
      n -= x;
      cnt++;
    }
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
