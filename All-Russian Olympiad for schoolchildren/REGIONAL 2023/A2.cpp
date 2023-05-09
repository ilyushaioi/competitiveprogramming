#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  long long p;
  cin >> n >> p;
  vector<long long> a(n), b(n), c(n);
  for (int i = 0; i < n; i++) {
    cin >> c[i] >> a[i] >> b[i];
  }
  auto yep = [a, b, c, n](long long x) {
    long long q = 0;
    for (int i = 0; i < n; i++) {
      if (x <= c[i]) {
        q += a[i] * x;
      }
      else {
        q += a[i] * c[i] + b[i] * (x - c[i]);
      }
    }
    return q;
  };
  long long ans = 0;
  long long res = 1'000'000'000'000LL;
  while (res - ans > 1) {
    long long m = ((ans + res) / 2);
    if (yep(m) < p) {
      ans = m;
    }
    else {
      res = m;
    }
  }
  cout << ans + 1 << '\n';
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
