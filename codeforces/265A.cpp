#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

void solve() {
  string s, t;
  cin >> s >> t;
  int i = 0;
  int j = 0;
  for (i = 0, j = 0; i < s.size() && j < t.size(); j++) {
    if (s[i] == t[j]) {
      i++;
    }
  }
  cout << i + 1 << '\n';
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
