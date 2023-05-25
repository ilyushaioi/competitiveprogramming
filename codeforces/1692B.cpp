#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

void danelya() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  unordered_map<int, int> ump;
  for (int i = 0; i < n; i++) {
    ump[a[i]]++;
  }
  int sz = ump.size();
  int t = 0;
  for (auto &(k) : ump) {
    t += k.second - 1;
  }
  if (t % 2) {
    sz--;
  }
  cout << sz << '\n';
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int TEST = 1;
  cin >> TEST;
  while (TEST --> 0) {
    danelya();
  }

  return 0;
}
