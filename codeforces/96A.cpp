#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

void solve() {
  string s;
  cin >> s;
  string t1 = "0000000";
  string t2 = "1111111";
  cout << (s.find(t1) != -1 || s.find(t2) != -1 ? "YES" : "NO");
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
