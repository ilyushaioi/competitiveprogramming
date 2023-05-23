#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

void solve() {
  int n;
  cin >> n;
  int X, Y, Z;
  for (int i = 0; i < n; i++) {
    int x, y, z;
    cin >> x >> y >> z;
    X += x;
    Y += y;
    Z += z;
  }
  cout << (X == 0 && Y == 0 && Z == 0 ? "YES" : "NO");
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
