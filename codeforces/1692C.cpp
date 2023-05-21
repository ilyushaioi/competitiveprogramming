#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for (int i = a; i < b; i++)
void solve() {
  int r, c;
  char g[9][9];
  rep(i, 1, 8 + 1) {
    rep(j, 1, 8 + 1) {
      cin >> g[i][j];
    }
  }
  rep(i, 2, 7 + 1) {
    rep(j, 2, 7 + 1) {
      if (g[i][j] == '#' && g[i - 1][j - 1] == '#' && g[i - 1][j + 1] == '#' && g[i + 1][j - 1] == '#' && g[i + 1][j + 1] == '#') {
        cout << i << " " << j << "\n";
        return;
      }
    }
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
