#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

void solve() {
  int a, b, n;
  cin >> a >> b >> n;
  int cnt = 0;
  while (a <= n && b <= n) {
    if (b < a) {
      swap(b, a);
    }
    a += b;
    cnt++;
  }
  cout << cnt << '\n';
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
