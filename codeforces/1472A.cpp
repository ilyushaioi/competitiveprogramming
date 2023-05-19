#include <bits/stdc++.h>

using namespace std;

void solve() {
  int w, h, n;
  cin >> w >> h >> n;
  cout << ((w * h& - w * h) < n ? "NO\n" : "YES\n");
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
