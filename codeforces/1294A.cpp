#include <bits/stdc++.h>

using namespace std;

void solve() {
  int a, b, c, n;
  cin >> a >> b >> c >> n;
  int sum = a + b + c + n;
  if (sum % 3 == 0) {
    n = sum / 3;
    if (a <= n && b <= n && c <= n) {
      cout << "YES" << '\n';
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
