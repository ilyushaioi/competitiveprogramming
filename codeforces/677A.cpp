#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

void solve() {
  int n, h;
  cin >> n >> h;
  int ans = 0;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    if (a[i] <= h) {
      ans++;
    }
    else {
      ans += 2;
    }
  }
  cout << ans;
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
