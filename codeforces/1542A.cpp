// created by ilyusha //

#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;
  int cnt[2] = {0};
  for (int i = 1, x; i <= n * 2; i++) {
    cin >> x;
    cnt[x % 2]++;
  }
  cout << (cnt[0] == n? "Yes\n" : "No\n");
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
