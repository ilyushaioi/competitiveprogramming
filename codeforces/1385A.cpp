// created by ilyusha //

#include <bits/stdc++.h>

using namespace std;

void solve() {
  vector<int> a(3);
  for (int i = 0; i < 3; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  if (a[1] != a[2]) {
    cout << "NO" << '\n';
  }
  else {
    cout << "YES" << '\n' << a[0] << ' ' << a[0] << ' ' << a[2] << '\n';
  }
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
