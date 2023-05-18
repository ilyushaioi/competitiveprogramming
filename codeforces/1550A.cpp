#include <bits/stdc++.h>

using namespace std;

void solve() { 
  int n;
  cin >> n;
  int x = 1;
  while (x * x < n) {
    x++;
  }
  cout << x << '\n';
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
