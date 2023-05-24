#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

void danelya() {
  int n, d;
  cin >> n >> d;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(all(a));
  cout << (a.back() <= d || a[0] + a[1] <= d ? "YES" : "NO") << '\n';
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
