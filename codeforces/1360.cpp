#include <bits/stdc++.h>

using namespace std;

void solve() {
  int a, b;
  cin >> a >> b;
  if (2 * min(a, b) >= max(a, b)){
    cout << pow(2 * min(a, b), 2) << "\n";
  }
  else{
    cout << pow(max(a, b), 2) << "\n";
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
