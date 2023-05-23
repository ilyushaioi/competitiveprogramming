#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

void solve() {
  int n, t;
  cin >> n >> t;
  string s;
  cin >> s;
  char tmp;
  for (int i = 0; i < t; i++) {
    for (int j = 0; j < n - 1; j++) {
      if (s[j] == 'B' && s[j + 1] == 'G') {
        tmp = s[j];
        s[j] = s[j + 1];
        s[j + 1] = tmp;
        j++;
      }
    }
  }
  cout << s;
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
