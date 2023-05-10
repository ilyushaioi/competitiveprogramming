#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;
  if (n <= 3) {
    cout << "-1\n";
    return;
  }
  int x = n;
  if (x % 2 == 0) {
    x--;
  }
  for (int i = x; i >= 1; i -= 2) {
    cout << i << ' ';
  }
  cout << 4 << ' ' << 2 << ' ';
  for (int i = 6; i <= n; i += 2){
    cout << i << ' ';
  }
  cout << '\n';
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

//https://codeforces.com/contest/1352/problem/G
