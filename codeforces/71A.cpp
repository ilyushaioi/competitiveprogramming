#include <bits/stdc++.h>

using namespace std;

void solve() {
  string s;
  cin >> s;
  if (s.size() > 10){
    cout << s[0] << s.size() - 2 << s[s.size() - 1] << "\n";
  }
  else{
    cout << s << "\n";
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);
  
  int TEST = 1;
  cin >> TEST;
  while (TESt --> 0) {
    solve();
  }
  return 0;
}

// https://codeforces.com/contest/71/problem/A
