#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

void solve() {
  string s, t;
  cin >> s >> t;
  int n1 = s.size();
  int n2 = t.size();
  int a[26] = {0};
  for (int i = 0; i < n1; i++) {
    a[s[i]] = i;
  }
  int ans = 0;
  for (int i = 1; i < n2; i++) {
    ans = ans + abs(a[t[i]] - a[t[i - 1]]);
  }
  cout << ans << '\n';
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
