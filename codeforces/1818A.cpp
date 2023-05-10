#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  string a, b;
  cin >> a;
  int cnt = 0;
  for (int i = 1; i < n; i++) {
    cin >> b;
    if (a == b) {
      cnt++;
    }
  }
  cout << cnt + 1 << '\n';
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

// https://codeforces.com/problemset/problem/1818/A
