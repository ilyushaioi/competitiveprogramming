// created by ilya //

#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  vector<long long> pre(n + 1);
  for (int i = 0; i < n; i++) {
    pre[i + 1] = pre[i] + a[i];
  }
  long long ans = 0;
  for (int i = 0; i <= k; i++) {
    int y = k - i;
    ans = max(ans, pre[n - y] - pre[2 * i]);
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
