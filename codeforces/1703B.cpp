// created by ilyusha //

#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int cnt = 0;
  set<char> ss;
  for (int i = 0; i < n; i++) {
    ss.insert(s[i]);
  }
  cnt += 2 * ss.size();
  cnt += n - ss.size();
  cout << cnt << '\n';
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
