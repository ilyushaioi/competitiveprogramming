#include <bits/stdc++.h>

using namespace std;

void solve() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int sum = 0;
  while (a && c && d) {
    a--;
    c--;
    d--;
    sum += 256;
  }
  while (a && b) {
    a--;
    b--;
    sum += 32;
  }
  cout << sum;
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
