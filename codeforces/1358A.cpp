#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

void solve() {
  int n, m;
  cin >> n >> m;
  int res = 0;
  if (m % 2 == 0) {
    if (n % 2 == 0) {
      res = (m / 2) * n + n / 2;
    }
    else {
      res = (m / 2) * n + n / 2 + 1;
    }
  }
  else {
    res = (m / 2) * n;
  }
  cout << res << '\n';
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
