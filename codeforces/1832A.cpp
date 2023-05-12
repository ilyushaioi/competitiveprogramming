// created by ilya //

#include <bits/stdc++.h>

using namespace std;

void solve() {
  string s;
  cin >> s;
  if (s.size() % 2 == 1) {
    s.erase(s.begin() + s.size() / 2);
  }
  cout << (s == string(s.size(), s[0]) ? "NO" : "YES") << '\n';
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
