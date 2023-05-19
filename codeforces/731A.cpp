#include <bits/stdc++.h>

using namespace std;

void solve() {
  string s;
  cin >> s;
  char cur = 'a';
  int ans = 0;
  for (int i = 0; i < s.size(); i++) {
    int w1;
    if (s[i] > cur) {
      w1 = s[i] - cur;
    }
    else {
      w1 = cur - s[i];
    }
    ans += min(min(s[i] - 'a' + 1 + 'z' - cur, cur - 'a' + 1 + 'z' - s[i]), w1);
    cur = s[i];
  }
  cout << ans << '\n';
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
