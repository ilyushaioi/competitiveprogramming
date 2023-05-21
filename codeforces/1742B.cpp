#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

void solve() {
  int n;
  cin >> n;
  set<int> s;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    s.insert(x);
  }
  cout << (s.size() == n ? "YES" : "NO") << '\n';
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
