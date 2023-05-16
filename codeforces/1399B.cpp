// created by ilyusha //

#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<long long> a(n), b(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  int mn = *min_element(a.begin(), a.end());
  int MN = *min_element(b.begin(), b.end());
  long long res = 0;
  for (int i = 0; i < n; i++) {
    int A = a[i] -= mn;
    int B = b[i] -= MN;
    res += max(A, B);
  }
  cout << res << '\n';
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
