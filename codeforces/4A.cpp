#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;
  if (n % 2 == 0 && n != 2) {
    cout << "YES";
  }
  else {
    cout << "NO";
  }
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

// https://codeforces.com/contest/4/problem/A?locale=en
