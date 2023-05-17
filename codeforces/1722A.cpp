// created by ilyusha //

#include <bits/stdc++.h>

using namespace std;

void solve() {
  int N; cin >> N;
  string s1, s2; cin >> s1 >> s2;
  for (char &c : s1){
    if (c == 'G') c = 'B';
  }
  for (char &c : s2){
    if (c == 'G') c = 'B';
  }
  cout << (s1 == s2 ? "YES" : "NO") << '\n';
}
signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int TEST = 1;
  cin >> TEST;
  while (TEST--) {
    solve();
  }

  return 0;
}
