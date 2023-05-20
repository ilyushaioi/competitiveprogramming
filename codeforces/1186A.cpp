#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

void solve() {
  int n, m, k;
  cin >> n >> m >> k;
  if (n <= m && n <= k) {
    cout << "YES";
  }
  else {
    cout << "NO";
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int TEST = 1;
//  cin >> TEST;
  while (TEST --> 0) {
    solve();
  }

  return 0;
}
