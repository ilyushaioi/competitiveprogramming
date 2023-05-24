#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

void danelya() {
  int n;
  cin >> n;
  int ans = -1;
  vector<int> a(n + 1, 0);
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (++a[x] >= 3) {
      ans = x;
    }
  }
  cout << ans << '\n';
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
