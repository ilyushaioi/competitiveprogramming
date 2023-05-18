#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;
  if (n <= 30) {
    cout << "NO\n";
    return;
  }

  cout << "YES\n";

  if (n == 36 or n == 40 or n == 44) {
    cout << 6 << " " << 10 << " " << 15 << " " << n - 31 << "\n";
  }
  else {
    cout << 6 << " " << 10 << " " << 14 << " " << n - 30 << "\n";
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
