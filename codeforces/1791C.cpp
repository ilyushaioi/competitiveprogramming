#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int i = 0;
  int j = n;
  while (i + 2 <= j && s[i] != s[j - 1]) {
    i++;
    j--;
  }
  cout << j - i << '\n';
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
