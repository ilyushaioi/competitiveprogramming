#include <bits/stdc++.h>

using namespace std;

void solve() {
  string s;
  cin >> s;
  set<char> ss;
  long long ans = 0;
  for (int i = 0; i < s.size(); i++) {
    ss.insert(s[i]);
    if (ss.size() > 3) {
      ans++;
      ss.clear();
      ss.insert(s[i]);
    }
  }
  if (ss.size() != 0) {
    ans++;
  }
  cout << ans << "\n";
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
