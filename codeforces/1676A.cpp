#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;
  int s1 = n % 10 + n /  10 % 10 + n / 100 % 10;
  int s2 = n / 1000 % 10 + n / 10000 % 10 + n / 100000 % 10;
  cout << (s1 == s2? "YES\n" : "NO\n");
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
