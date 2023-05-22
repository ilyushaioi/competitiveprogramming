#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

void solve() {
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 0; i < 30; i++) {
    if (((n >> i) & 1) == 1) {
      ans = i;
    }
  }
  cout << (1 << ans) - 1 << '\n';
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
